#include <stdio.h>
#include<stdlib.h>

void fun(int *pp){
    pp = (int*)malloc(sizeof(int));
    *pp=12;
}

int main() {
    int x =10;
    int *p = &x;
    fun(p);
    printf("%d\n",x);
    return 0;
}
