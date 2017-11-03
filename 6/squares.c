#include <stdio.h>

#define N 100


int main() {

	int sum, sqsum, sumsq;
	int i;

	sum = N*(N+1)/2;
	sqsum = sum*sum;


	sumsq = 0;
	for(i=0;i<=N;i++) {
		sumsq += i*i;
	}

	printf("%d\n", sqsum - sumsq);
}
