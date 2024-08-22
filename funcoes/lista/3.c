#include <stdio.h>

int somaInteirosPares (int n) {

	int acm = 0;

	for(int i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			acm += i;
		}
	}
	
	return acm;
}


int main() {
	
	int n, soma;
	printf("quantos numeros a serem somados? ");
	scanf("%i", &n);
	
	soma = somaInteirosPares(n);
	printf("soma dos %i primeiros inteiros pares: %i", n, soma);
	
	return 0;
	
}