#include <stdio.h>

int somatorioPrimos(int n1, int n2) {
	
	int aux = 0, primo = 0, somaPrimos = 0;
	
	for(int i = n1; i <= n2; i++) {
//		Verifica se o número é primo
		for(int j = 1; j <= i; j++) {
			if(i % j == 0) {
				aux++;
			}
		}
//		Se o numero for primo, o aux será 1 ou 2 (1: número 1; 2: demais números)
		if (aux <= 2) {
			somaPrimos += i;
		}
//		Reseta o auxiliar a cada iteração de i.
		aux = 0;
	}
	return somaPrimos;
}

// 1 2 3 5 7 11 = 29

int main() {
	
	int n1, n2;
	printf("n1: ");
	scanf("%i", &n1);
	printf("n2: ");
	scanf("%i", &n2);
	
	int soma = somatorioPrimos(n1, n2);
	
	printf("somatorio dos numeros primos entre %i e %i: %i", n1, n2, soma);
	
	return 0;
}