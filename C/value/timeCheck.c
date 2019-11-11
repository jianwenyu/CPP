#include <sys/time.h>
#include <stdio.h>

int main(){

	int i=0;
	struct timeval  tv1, tv2;
	gettimeofday(&tv1, NULL);
	/* stuff to do! */
	while(i<10000000){
		i++;
	}
	gettimeofday(&tv2, NULL);

	printf ("Total time = %f seconds\n",
		       (double) (tv2.tv_usec - tv1.tv_usec) / 1000000 +
		       (double) (tv2.tv_sec - tv1.tv_sec));
	return 0;
}
