#include <stdio.h>

// 9 - Numero primo

int main() {
	
	int num;
	
	printf("numero: ");
	scanf("%i", &num);
	
	int cont = 1;
	int aux = 0;

	while(cont <= num) {
		if (num % cont == 0) {
			aux++;
		}
		cont++;
	}
	
	if (aux > 2) {
		printf("NAO NUMERO PRIMO");
	} else {
		printf("NUMERO PRIMO!");
	}
	
	return 0;
}