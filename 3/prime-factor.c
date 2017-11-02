#include <stdio.h>
#include <math.h>


int main() {

	long n;
	long f, p;

	n = 600851475143;
	f = sqrt(n);
	p = 2;

	while(1) {
	
		if(n == p)
			break;

		if(n%p == 0) 
			n = n/p;
		else
			p++;
	}
	
	printf("%ld\n", n);
	
	

}
