#include <stdio.h>


int is_palindrome(int p) {

	int number, digit, reverse;

	number = p;
	reverse = 0;

	while(number > 0) {
		digit = number%10;
		reverse = reverse*10+digit;
		number = number/10;
	}

	if(p == reverse) 
		return 1;
	else
		return 0;
}

int main() {

	int p;
	int a, b, c, start_a, start_b;

	start_a=start_b=999;
	c = start_a+start_b;

	while(c>199) {

		c = a+b;
		a = start_a;
		b = start_b;
		
		while(a<=999 && b>99) {
			if(is_palindrome(a*b)) {
				printf("%d x %d = %d\n", a, b, a*b);
				return 0;
			}
			
			a++;b--;
		}
		if(start_a == start_b)
			start_b--;
		else
			start_a--;
		c = start_a+start_b;
		
	}

}
