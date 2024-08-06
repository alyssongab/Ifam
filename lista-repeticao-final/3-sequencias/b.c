#include <stdio.h>

int main () {
	
	int num = 1, denom = 1, pot = 1;
	float div, sum = 0;
	
	for(int i = 1; i <= 10; i++) {

		if(i % 2 == 0) {
			div = (-1)*(float) num/pot;
		}
		else {
			div = (float) num/pot;
		}
		printf("%i / %i\n", num, pot);
		printf("%f\n\n", div);
		
		sum += div;
		num ++;
		denom++;
		pot = denom * denom;
	}
	
	printf("soma da sequencia (1/1 - 2/4 + 3/9 - 4/16..-10/100) = %.2f", sum);
	
	return 0;
}