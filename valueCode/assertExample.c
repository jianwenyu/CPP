#include <stdio.h>
#include <assert.h>

void printNumber(int* num){
	assert(num!=NULL);
	printf("%d\n",*num);
}

int main(int argc, char **argv){
	int a = 10;
	int *b=NULL;
	int *c=NULL;
		
	b=&a;

	printNumber(b);
	printNumber(c);
	return 0;
}
