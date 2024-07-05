#include <stdio.h>

int main () {

	int numero;
	int fatorial = 1;
	
	printf("escolha um numero: ");
	scanf("%i", &numero);
	
	if (numero == 0 || numero == 1) {
		printf("O fatorial de %i e 1", numero);
	} 
	else if (numero < 0) {
		printf("Nao existe fatorial de numero negativo!");
	}
	else {
	
		int cont = 1;
		while (cont < numero) {
			fatorial *= cont + 1;
			cont++;
		}
	}
	
	printf("O fatorial de %i e %i", numero, fatorial);
	
	return 0;
}