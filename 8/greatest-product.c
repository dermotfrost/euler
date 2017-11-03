#include <stdio.h>
#include <string.h>

#define N 13

int main() {

	char str[]="7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int num[1000];
	int i, j;
	long product, max_product;


	for(i=0;i<1000;i++) {
		num[i] = str[i]-'0';
	}
	
	product=1;
	for(i=0;i<N;i++)
		product*=num[i];
	max_product = product;

	printf("Init prod of %d is %ld\n", N, max_product);


	for(;i<1000;i++) {


		if(num[i] == 0) {
reset:
			// printf("skipping 0 at %d\n", i);
			if(i>=1000) { goto end; }
			i++;
			product = 1;
			for(j=0;j<N;j++,i++) {
				/* Found a zero in the bit we're skipping over */
				if(num[i] == 0) { goto reset; }

				product*=num[i];
				// printf("%d\t", num[i]);
			}
			i--;
			// printf("\nreset prod to %d (next number is num[%d] = %d\n",product, i+1, num[i+1]);
			
		} else {
			if(num[i-N] == 0) {
				/* 
				printf("Ack divide by zero incoming\n");
				for(j=-4;j!=0;j++)
					printf("%d (%d)\t", num[i+j], i+j);
				printf("\n");
				*/
				return 0;
			}
			product/=num[i-N];
			product*=num[i];
		}

		if(product > max_product) {
			max_product = product;
			// printf("max updated to %d at %d\n", max_product, i);
		}
	}

end:
	printf("Max product of %d is %ld\n", N, max_product);
	

}
