#include <stdio.h>

int main () {
	
	int num = 2, denom = 500;
	float div, sum = 0;
	
	for(int i = 1; i <= 10; i++) {
		div = (float)num/denom;
		printf("%i / %i \n", num, denom);
		printf("divisao = %f\n\n", div);
		sum += div;
		denom -= 50;

		if(num == 2) {
			num = -5;
		}
		else if(num == -5) {
			num = 2;
		}
			
	}
	
	printf("soma dos 10 primeiros termos = %.2f", sum);
	
	return 0;
}