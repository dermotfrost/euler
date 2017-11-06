#include <stdio.h>
#include <stdlib.h>

#define N 1000

int main() {

	int i, j, k;

	for(i=1;i<N;i++) {
		for(j=i;j<N;j++) {
			for(k=j;k<N;k++) {
				// printf("%d %d %d\n", i, j, k);
				if(i+j+k != N)
					continue;
				if(i*i + j*j == k*k)
					printf("%d*%d*%d = %d\n", i, j, k, i*j*k);
			}
		}
	}

}
