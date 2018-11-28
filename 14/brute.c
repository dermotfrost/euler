#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000000


int main() {

	long N_max = N;
	long *A;
	long i, x, count;

	A = malloc(1000000 * sizeof(long));

	for(i=0;i<N;i++)
		A[i] = 0;


	for(i=1;i<N;i++) {

		if(i%5000 == 0) {
			printf("%ld\n", i);
		}
		x=i;
		count=1;
		// printf("%ld\t", x);
		while(x != 1) {

			if(x%2 == 0)
				x=x/2;
			else
				x=3*x+1;
			count++;

		}
		A[i] = count;
		// printf("%ld\t",count);
	}

	count = 0;
	for(i=1;i<N;i++) {
		if(A[i] > A[count])
			count=i;
	}
	printf("\n%ld\n", count);
}
