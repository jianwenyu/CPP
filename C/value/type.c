#include <stdio.h>

int main(int argc, char** argv){
	int a = 1;
	float b = 2.3;
	int c = a+(int)b;
	float d = (float)a+b;
	printf("c is %d, %f \n",c,c);
	printf("d is %d, %f \n",d,d);
	return 0;
}
