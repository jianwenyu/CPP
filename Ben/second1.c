#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Transactions {
	char transDate[50];
	double price;
	char payment[50];
	char name[50];
	char city[50];
	char state[50];
	char country[50];
	char accCreate[50];
	char lastLogin[50];
	double latitude;
	double longtitude;
};

int countRow (FILE *file);
void printmenu(void);
void loadentry11(char *line, struct Transactions *trans);
struct Transactions RECORD[2000];

int main(int argc, char **argv){
	
	if (argc<2) {
		printmenu();
	}

	char *fileName;
	int i = 0;
	int boolean = 0;
	int filterCount = 0;


	
	//struct Transactions record1[140];
	//record = malloc(1*sizeof(struct Transactions));
/* 	for (i=0;i<150;i++){
	
		strcpy(record[i].city,"Toronto");
		//strcpy(record[1].city,"Taishan");
	
	}
	int temp;
	for (temp=0;temp<50;temp++){
		printf("record info has %s\n", record[temp].city);
	} */


	//char *filterType[15];
    //struct Transactions *tptr = (struct Transactions *)malloc(2000*sizeof(struct Transactions));
	char *filter[15];
    //read command line and store
	while (i<argc) {
		if (strcmp(argv[i], "-csv") == 0) {
			fileName = argv[i+1];
			i++;
			boolean = 1; //inputline has a file name
		}
		else {
			if (strncmp(argv[i],"-", 1) == 0) {
				filter[filterCount] = argv[i+1];
				filterCount++;
				i++;
			}
		}
		i++;
	}
	if (boolean == 1) {
		FILE *csvFile; //input file handler
		FILE *done; //output file handler
		int row;
		int column = 11; //known value
		char line[255]; //use maximum char in one line
		
		csvFile = fopen(fileName, "r");
		done = fopen("done.csv", "w");
		row = countRow(csvFile); // count how many row in the file
		printf("Input file has %d rows.\n", row);
		//segmantation fault 11
        printf("101");
		if (csvFile == NULL) {
			perror("error opening file\n");
			exit(1);
		}
		else {
			int j = 0;
			i=1;
            printf("123");
			while (fgets(line, 256, csvFile)!=NULL) {
                if (j<row){
                    printf("here");
                    loadentry11(line, &RECORD[j]);
                    printf("j is %d\n", j);
                    printf("%s\n", RECORD[j].transDate);
                    printf("%.2f\n", RECORD[j].price);
                    printf("%s\n", RECORD[j].payment);
                    j++;
                }
                else {
                    break;
                }
            }
        printf("final j is %d\n", j);
			
/* 			printf("Input file has %d rows.\n", row);
			int match;
			
			while (fgets(line, 256, csvFile)!=NULL){
				match = 0; //reset match for next line checking
				for (j=0;j<filterCount;j++){
					if (strstr(line, filter[j])!=NULL) {
						match++;
					}
					else {
						break; //exit for loop if one of them is not matching
					}
				}
				if (match == filterCount) {
					fputs(line, done); //filtered data is match, so write in a output file
				}
			}
			row = countRow(done);
			printf("The data filtered are saved in a new file named <done.csv>.\n");
			printf("Output file has %d rows.\n", row); */
		}
		
		fclose(csvFile);
		fclose(done);
	}
	else {
		puts("No file name is entered!");
		printmenu();
	}
	return 0;
}

void printmenu(void) {
	printf("-csv     <filename.csv>\n");
	printf("-payment <payment method>\n");
	printf("-city    <city name>\n");
	exit(1);
}

int countRow (FILE *file){
	int row = 0;
	int count = 0;
	int i = 0;
	char readOneLine[256];
	if (file == NULL) {
		perror("error opening file for function countRow\n");
		exit(1);
	}
	else {
		while (fgets(readOneLine, 256, file) != NULL) { 
			row++;
		}
	}
	fseek(file, 0, SEEK_SET);
	return row;
}

void loadentry11(char *line,struct Transactions *trans){
	int column = 11;
	int i = 0;
	char *token;
	while (i<column){
		if (i==0){
			token = strtok(line, ",");
		}
		else{
			token = strtok(NULL, ",");
		}
		switch(i){
			case 0: strcpy(trans->transDate, token); break;
			case 1: trans->price = atoi(token); break;
			case 2: strcpy(trans->payment, token); break;
			case 3: strcpy(trans->name, token); break;
			case 4: strcpy(trans->city, token); break;
			case 5: strcpy(trans->state, token);break;
			case 6: strcpy(trans->country, token); break;
			case 7: strcpy(trans->accCreate, token); break;
			case 8: strcpy(trans->lastLogin, token); break;
			case 9: trans->latitude = atoi(token); break;
			case 10: trans->longtitude = atoi(token); break;
			default: printf("error assigning token into structure member\n"); exit(1);
		}
		i++;
	}
}

/*  	while (i < row) {
		if (fgets(readOneLine, linelen, hello) == NULL) break;
			
			//separate the number by comma 
			while (j < column) {
				if (j == 0) {
					token = strtok(readOneLine, delimiter);
				}
				else {
					token = strtok(NULL, delimiter);
					if (token == NULL) break; // end of line
				}
				matrix[i][j] = atoi(token); //assign the number into array
				printf("%d, %d is %d\n",i+1, j+1, matrix[i][j]);				
				j++; // next column
				}
			i++; // next row
			j = 0; //reset the column 
	} */
