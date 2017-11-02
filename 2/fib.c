#include <stdio.h>

int main() {
	int a, b, c;
	int sum;
	a=1;
	b=2;

	while(a<4000000) {
		if(a%2 ==0) 
			sum+=a;
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d\n", sum);

}
