#include <stdio.h>

// Fibonacci usando while

int main () {
	
	int inicial = 1;
	int proximo = 1;
	int resultado;
	
	int cont = 1;
	
	printf("%i %i ", inicial, proximo);
	while (cont <= 15) {
		resultado = inicial + proximo;
		printf("%i ", resultado);
		inicial = proximo;
		proximo = resultado;
		cont++;
	}
	
	return 0;
}