#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "fileSupport.h"

enum Type_t {payment, name, city, state, country};

void printmenu(void);
void printdata(struct Transaction_t trans);
int argcheck(char **filter, char **filterType, char **argv, int argc);
void writefile(FILE *file, struct Transaction_t trans);
//void getline(char *line, size_t size, struct Transaction_t trans);
int* datafilter(struct Transaction_t trans[], int row, char **filter, enum Type_t filterType[], int num_filter);

struct Transaction_t RECORD[1500];

int main(int argc, char **argv){
	
	//function instruction
	if (argc<2) {
		printmenu();
	}
	
	enum Type_t filter_enum[5];
	int i = 0;
	int j = 0;
	int row=0; //number of row
	int column = 11; //known value
	int num_filter; //number of filter
	char *filename = argv[2]; //read filename from runtime argument
	
	FILE *csvFile; //input file handler
	FILE *done; //output file handler	
	char *line = (char *)malloc(256*sizeof(char)); //use maximum char in one line
	int *filter_array; //store the good index after filter, [0] store the number of total good index
	char *filter[10]; //assign array of 10 pointers to char
	char *filterType[10];
	for (i=0;i<10;i++){
		filter[i]=(char*)malloc(256*sizeof(char)); //allocate memory for each pointer to char
		filterType[i]=(char*)malloc(256*sizeof(char));
	}
	num_filter = argcheck(filter, filterType, argv, argc);
	printf("num of filter is %d\n", num_filter);
	for (i=0;i<num_filter;i++) {
		printf("filterType has %s\n", filterType[i]);
		printf("filter has %s\n", filter[i]);
		if (strcmp(filterType[i], "payment")==0){filter_enum[i] = payment;}
		if (strcmp(filterType[i], "name")==0){filter_enum[i] = name;}
		if (strcmp(filterType[i], "city")==0){filter_enum[i] = city;}
		if (strcmp(filterType[i], "state")==0){filter_enum[i] = state;}
		if (strcmp(filterType[i], "country")==0){filter_enum[i] = country;}
	}
	if (num_filter == 0) {
		puts("No filter is entered!");
		printmenu(); //exit
	}
	else {
		printf("number of filer is %d\n", num_filter);
	}
	csvFile = fopen(filename, "r");
	done = fopen("done.csv", "w");
	row = countrow(csvFile); // count how many row in the file
	printf("Input file has %d rows.\n", row);
	if (csvFile == NULL) {
		perror("error opening file\n");
		printmenu();
	}
	else {
		i=0;//reset i
		while (fgets(line, 256, csvFile)!=NULL) {
			if (i<row){
				printf("%d line read is\n", i);
				puts(line);
				loadentry11(line, &RECORD[i]);
				i++;
			}
		}
		printf("loading to struct is done.\n");
		filter_array = (int *)malloc(row*sizeof(int));
		filter_array = datafilter(RECORD, row, filter, filter_enum, num_filter);
		printf("size of filter_array is %d\n", filter_array[0]);
		for (i=1;i<filter_array[0]+1;i++){
			printdata(RECORD[filter_array[i]]);
			writefile(done, RECORD[filter_array[i]]);
		}
		printf("final i is %d\n", i);
		printf("The data filtered are saved in a new file named <done.csv>.\n");
		printf("Output file has %d rows.\n", row); 
/* 			int match;
		while (fgets(line, 256, csvFile)!=NULL){
			match = 0; //reset match for next line checking
			for (j=0;j<filterCount+1;j++){
				if (strstr(line, filter[j])!=NULL) {
					match++;
				}
				else {
					break; //exit for loop if one of them is not matching
				}
			}
			if (match == filterCount+1) {
				fputs(line, done); //filtered data is match, so write in a output file
			}
		}
		row = countRow(done);
		printf("The data filtered are saved in a new file named <done.csv>.\n");
		printf("Output file has %d rows.\n", row); */
	}
	
	fclose(csvFile);
	fclose(done);
	//need to free string filter and filter type
	return 0;
}

void printmenu(void) {
	printf("-csv     <filename.csv>\n");
	printf("-payment <payment method>\n");
	printf("-name    <name of person>\n");
	printf("-city    <city name>\n");
	printf("-state	 <state name>\n");
	printf("-country <county name>\n");
	exit(1);
}

int argcheck(char **filter, char **filterType, char **argv, int argc){
	int i = 0;
	int j = 0;
	char *type[5];
	for (i=3;i<argc;i++){
		if (argv[i][0] == '-') {
			filterType[j] = argv[i]+1;
			filter[j] = argv[i+1];
			j++;
			i++;
		}			
	}
	return j;
}


void printdata(struct Transaction_t trans){
	printf("trans date is %s\n", trans.transDate);
	printf("price is %d\n", trans.price);
	printf("payment is %s\n", trans.payment);
	printf("name is %s\n", trans.name);
	printf("city is %s\n", trans.city);
	printf("state is %s\n", trans.state);
	printf("county is %s\n", trans.country);
	printf("account create is %s\n", trans.accCreate);
	printf("last login is %s\n", trans.lastLogin);
	printf("latitude is %d\n", trans.latitude);
	printf("longitude is %d\n", trans.longtitude);
	printf("whole line is\n%s,%d,%s,%s,%s,%s,%s,%s,%s,%d,%d\n", 
			trans.transDate, trans.price, trans.payment, trans.name,
			trans.city, trans.state, trans.country, trans.accCreate,
			trans.lastLogin, trans.latitude, trans.longtitude);
}

void writefile(FILE *file, struct Transaction_t trans){
	fprintf(file, "%s,%d,%s,%s,%s,%s,%s,%s,%s,%d,%d", 
			trans.transDate, trans.price, trans.payment, trans.name,
			trans.city, trans.state, trans.country, trans.accCreate,
			trans.lastLogin, trans.latitude, trans.longtitude);
	fprintf(file, "\n");
}

int* datafilter(struct Transaction_t trans[], int row, char **filter, enum Type_t filterType[], int num_filter){
	//on success, return the array of index 
	int i = 0; //transaction index
	int filter_index = 0; //filter index
	int count = 0;
	int *good_i = (int *)malloc(row*sizeof(int));
	int good_index = 1; //good_i begin at second index of array, good_i[0] stores the num of line after filtering
	for (i=0;i<row;i++){
		count = 0;
		for (filter_index=0;filter_index<num_filter;filter_index++){
			//temp = (enum Type_t)filterType[filter_index];
			//printf("temp is %d", temp);
			switch(filterType[filter_index]){
				case payment:
					if (strcmp(trans[i].payment, filter[filter_index])==0) {count++;printf("dataloop i is %d\n", i);} 
					else {break;}
				case name:
					if (strcmp(trans[i].name, filter[filter_index])==0) {count++;}
					else {break;}
				case city:
					if (strcmp(trans[i].city, filter[filter_index])==0) {count++;}
					else {break;}
				case state:
					if (strcmp(trans[i].state, filter[filter_index])==0) {count++;}
					else {break;}
				case country:
					if (strcmp(trans[i].country, filter[filter_index])==0) {count++;}
					else {break;}
				default: 
					perror("oOps!Filter type is out of range. Check the content in <filterType>\n");
					exit(1);
			}
		}
		printf("i = %d, count = %d, num of filter is %d\n", i, count, num_filter);
		if (count == num_filter) {
			good_i[good_index] = i; //store the index i as an desired data
			good_index++;
		}
	}
	good_i[0]=good_index-1;
	return good_i;
}


