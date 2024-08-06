#include <stdio.h>

int main () {
	
	int num = 1, denom = 1;
	float div, soma = 0;
	
	for(int i = 1; i <= 50; i++) {
		div = num/denom;
		soma += div;
		num += 2;
		denom++;
	}
	
	printf("soma da sequencia (1/1, 3/2, 5/3..99/50) = %.2f", soma);
	
	return 0;
}