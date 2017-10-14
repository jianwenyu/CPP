#include<stdio.h>

int main(int agrc, char ** argv){
    FILE *fp;
    char buff[50];
    fp = fopen("textio.txt","r");
    /*
    fscanf(fp,"%s",buff);
    printf("1: %s\n",buff);
    */
    while(!feof(fp)){
    fgets(buff,50,(FILE*)fp);
    printf("%s",buff);
    }
    fclose(fp);
    return 0;
}
