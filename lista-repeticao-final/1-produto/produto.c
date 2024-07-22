#include <stdio.h>

int main () {
	
	int num;
	int prod = 1;
	
	while(num != 0) {
		printf("Digite um numero: ");
		scanf("%i", &num);
		if (num != 0) {
			prod *= num;
		}
	}
	
	printf("O produto dos numeros digitados: %i", prod);
	
	return 0;
}