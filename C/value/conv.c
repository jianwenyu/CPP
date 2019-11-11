#include <stdio.h>
#include <string.h>


int main(int argc, char** argv){
	unsigned long long a=0;
	double b = 1;
	printf("break mark 1\n");
	memcpy((void*)&a,(void*)&b,sizeof(double));
	printf("a:%llu b:%lf \n",a,b);
	printf("break mark 2\n");
	return 0;

}

