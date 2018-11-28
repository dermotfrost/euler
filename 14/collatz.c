#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10000


int main() {

	int N_max = N;
	int *A;
	int i, x, count;

	A = malloc(1000000 * sizeof(int));

	for(i=0;i<N;i++)
		A[i] = 0;


	for(i=1;i<N;i++) {

		x=i;
		count=1;
		// printf("%d\t", x);
		while(x != 1) {

			if(x%2 == 0)
				x=x/2;
			else
				x=3*x+1;
			count++;

			/* Need more space for A */
			if(x > N_max) {
				A = realloc(A, N_max*sizeof(int)*2);
				printf("Realloc - %d\n", N_max*2);
				if(A == NULL) {
					printf("Realloc failed\n");
					exit(1);
				}

				bzero(&A[N_max], N_max*sizeof(int));
				N_max*=2;
			}

			if(A[x] != 0) {
				// printf("Already solved from here (%d) wl %d", x, A[x]);
				count+=A[x]-1;
				x=1;
			}
		}
		A[i] = count;
		// printf("\tSetting A[%d] to %d\n", i, count);
	}

	count = 0;
	for(i=1;i<N;i++) {
		if(A[i] > A[count])
			count=i;
	}
	printf("%d\n", count);
}
