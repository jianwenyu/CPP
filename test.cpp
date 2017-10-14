#include <stdio.h>
int main()
{
    volatile int a = 10;
    if (a == a--){
        printf("TRUE 1\n");
    }else printf("FALSE\n");
        a = 10;
    if (a == --a)
        printf("TRUE 2\n");
        return 0;
}

