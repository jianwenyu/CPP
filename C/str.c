#include<stdio.h>

int str(char *str1,char *str2){
    char *s1=NULL;
    char *s2=NULL;
    if(str1==NULL){
        return (str2==NULL)?1:0;
    }
    
    if(str2==NULL){
        return 1;
    }
    
    for(;*str1!='\0';str1++){
        if(*str1==*str2){
            for(s1=str1,s2=str2;;){
                if(*++s2=='\0'){
                    return 1;
                }
                else if (*++s1!=*s2){
                    break;
                    //return 0;
                }
            }
        }
    }
    return 0;
}

int main(void){
    char a[]="abcdefghi";
    char b[] = "bcd";
    
    if(str(a,b)){
        printf("Contain\n");
    }else printf("no\n");
    return 0;
}
