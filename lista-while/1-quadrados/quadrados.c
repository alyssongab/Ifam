#include <stdio.h>

int main () {
	
	int cont = 15;
	int quadrado = 1;
	
	while (cont <= 35) {
		
		quadrado = cont * cont;
		printf("%i ", quadrado);
		cont++;
		
	}
	
	return 0;
}