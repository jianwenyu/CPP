#include<stdio.h>
#include<string.h>
#include<stdlib.h>

extern void writeToFile(FILE *fp,int n);

int main(int argc,char **argv) {
    FILE *fp;
    int i=1,j=0;
    char buff[4];
    char str[] = "function";
    fp = fopen("writetofile.txt","w");

    while(i<5) {
        writeToFile(fp,i);

        i++;
    }

    fclose(fp);

    return 0;
}
