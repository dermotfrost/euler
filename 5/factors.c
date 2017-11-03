#include <stdio.h>
#include <stdlib.h>

#define N 20

double * factors(int x) {

	double *p;
	int i, j, t, isprime;

	t=x;
	isprime=1;

	p = malloc((N+1)*sizeof(double));
	for(i=0;i<N+1;i++)
		p[i] = 0;

	for(i=2;i<x;i++) {
		while(t%i == 0) {
			isprime = 0;
			p[i]++;
			t=t/i;
		}
	}
	if(isprime)
		p[x] = 1;

	return p;
}

int main() {

	int A[N+1];
	int i, j, prod;
	double *p;

	// factors(4);
	// return 0;

	for(i=0;i<=N;i++)
		A[i] = 0;

	for(i=2;i<=N;i++) {
		// printf("factorizing %d\n", i);
		p = factors(i);
		for(j=2;j<=N;j++)
			if(p[j] > A[j])
				A[j] = p[j];
		free(p);	
	}
	
	prod = 1;
	for(i=2;i<=N;i++) 
		for(j=0;j<A[i];j++)
			prod *= i;

	printf("\n%d\n", prod);
}
