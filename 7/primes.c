#include <stdio.h>
#include <math.h>

#define N 10001

int is_prime(int x) {

	int i;
	if(x == 2 || x == 3)
		return 1;
	
	for(i=2;i<=sqrt(x);i++) 
		if(x%i == 0)
			return 0;	

	return 1;
}
int main() {
	
	int pcount=0;
	int x;

	x = 1;
	while(pcount < N) {
		x++;
		if(is_prime(x)) {
			pcount++;			
		}
	}

	printf("%d is %d\n", pcount, x);
}
