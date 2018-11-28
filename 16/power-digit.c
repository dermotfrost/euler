#include <stdio.h>
#include <stdlib.h>

#define N 1000
#define NDIGITS 350  // Guess based on N

int main() {


	int digits[NDIGITS];
	int i, j, sum;

	/* Initialize */
	digits[0] = 1;
	for(i=1;i<NDIGITS;i++) {
		digits[i] = 0;
	}


	for(i=0;i<N;i++) {
		/* Double every digit */
		for(j=0;j<NDIGITS;j++)
			digits[j] *= 2;

		/* Deal with carries */
		for(j=0;j<NDIGITS-1;j++) {
			digits[j+1] += digits[j]/10;
			digits[j] = digits[j]%10;
		}
	}

	sum = 0;
	for(i=NDIGITS-1;i>=0;i--) {
		printf("%d ", digits[i]);
		sum += digits[i];
	}
	printf("\n%d\n", sum);
}
