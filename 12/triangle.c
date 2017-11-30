#include <stdio.h>
#include <math.h>

int main() {

	long N;
	long triangle;
	long numdiv;
	long root;
	long i;
	
	triangle=0;

	for(N=1; ;N++) {
		triangle += N;

		numdiv=0;
		root = sqrt(triangle);
		for(i=1;i<root;i++) {
			if(triangle%i == 0) {
				numdiv+=2;
			}
		}
		if(root*root == triangle)
			numdiv++;

		// printf("%d: %d -> %d\n", N, triangle, numdiv);

		if(numdiv>500) {
			printf("%ld: %ld\n", N, triangle);
			return 0;

		}
	}
}
