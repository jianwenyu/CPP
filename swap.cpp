#include<cstdio>

using namespace std;

int main(int argc,char **argv){
    int a = 1;
    int b = 2;
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    
    //swapping code occur
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After the swap:\n");
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    
    return 0;
}
