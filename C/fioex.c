#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void writeToFile(FILE *fp,int n){
    int i =0;
    for(i=0;i<=n;i++){
        fprintf(fp,"%d\n",n);
    }
}
