#include <stdio.h>

int somaNumeros(int n);

int main() {
	
	int n;
	int soma;
	printf("valor de n: ");
	scanf("%i", &n);
	
	soma = somaNumeros(n);
	printf("soma: %i", soma);
	
	return 0;
}

int somaNumeros(int n) {
	
	if (n == 0) {
		return 0;
	}
	else {
		return n + somaNumeros(n-1);
	}	
}
