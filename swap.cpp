#include<cstdio>

using namespace std;

#define swap(a,b){\
    a = a^b;    \
    b = b^a;    \
    a = a^b;    \
}

int main(int argc,char **argv){
    int a = 1;
    int b = 8;
    printf("Before the swap:\n");
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    
    //swapping code occur
    swap(a,b);
    
    printf("After the swap:\n");
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    
    return 0;
}
