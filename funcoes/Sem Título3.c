#include <stdio.h>

void troca(int *a, int *b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int main() {
	int x, y;
	
	printf("digite 2 numeros inteiros: \n");
	scanf("%d %d", &x, &y);
	printf("antes da troca -> x: %i, y: %i", x, y);
	troca(&x, &y);
	printf("\ndepois da troca -> x: %i, y: %i", x, y);
		
	return 0;
}