#include <stdio.h>
#include <math.h>

#define N 2000000

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
	int i;
	long sum;

	sum=0;
	for(i=2;i<N;i++)
		if(is_prime(i)) {
			sum+=i;
		}

	printf("\n%ld\n", sum);
}
