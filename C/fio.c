#include<stdio.h>

int main(int argc,char **argv){
    FILE *fp;
    int i;
    fp = fopen("textio.txt","w");
    for(i = 1; i <=10;++i){
        fprintf(fp,"Loop: %d\n",i);
    }
    fclose(fp);
    return 0;
}
