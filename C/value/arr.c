#include <stdio.h>

int func(void **a){
	int i;
	for(i = 0; i< 5; i++){
		printf("%d\n",(int*)a[i]);	
	}

	return 0;
}

int main(int argc, char **argv){
	int a[5] = {1,2,3,4,5};
	func((void*)&a);
	return 0;
}
