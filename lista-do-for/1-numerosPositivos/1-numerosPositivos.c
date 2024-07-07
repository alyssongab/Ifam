#include <stdio.h>

int main () {
	
	int num, acm;
	
	do {
		printf("numero: ");
		scanf("%i", &num);
		acm++;
		
	} while (num >= 0);
	
	printf("numeros positivos: %i", acm-1);
	
	return 0;
}