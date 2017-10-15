#include<stdio.h>

int main(int argc, char** argv){
    
    FILE *fp;
    char buff[50];
    char cc;
    fp = fopen("textio.txt","r");
    
    /*
    while(!feof(fp)){
        fscanf(fp,"%s",buff);
        printf("%s \n",buff);
    }
    */
    
    /*
    while(!feof(fp)){
        cc=fgetc(fp);
        printf("%c",cc);
    }
    */
    
    while(!feof(fp)){
        fgets(buff,50,fp);
        printf("%s",buff);
    }
    fclose(fp);
    
    return 0;
}
