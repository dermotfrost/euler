#include <stdio.h>
#include <stdlib.h>

#define N 21

int main() {

	long A[N][N];
	int i, j, k;


	/* Boundary conditions */
	for(i=0;i<N;i++) {
		A[i][0] = A[0][i] = 1;
	}

	for(i=1;i<N;i++)
		for(j=1;j<N;j++) 
			A[i][j] = A[i-1][j] + A[i][j-1];
	

	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			printf("%8ld ", A[i][j]);
		}
		printf("\n");
	}

}
