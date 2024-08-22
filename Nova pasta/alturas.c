#include <stdio.h>

int main() {
	
	float alturas[7] = {1.60, 1.62, 1.64, 1.60, 1.70, 1.57, 1.75};
	
	// **********************************************
	// Mostrar elementos na posicao par
	printf("elementos na posicao par:\n");
	for(int i = 0; i < 7; i++) {
		if (i % 2 == 0) {
			printf("%.2f - [%d]\n", alturas[i], i);
		}
	}
	
	
	// **********************************************
	// Media aritmetica
	float med = 0;
	for(int i = 0; i < 7; i++) {
		med += alturas[i];
	}
	med = med / 7;
	printf("\nmedia: %.2f", med);
	
	
	// **********************************************
	// somar o vetor A[?] com os seguintes dados: (5, 10, 15..)
	int A[7] = {5, 10, 15, 20, 25, 30, 35};
	float C[7];
	float soma;
	
	printf("\n\n");
	for(int i = 0; i < 7; i++) {
		soma = alturas[i] + A[i];
		C[i] = soma;
	}
	
	for(int i = 0; i < 7; i++) {
		printf("%.2f\n", C[i]);
	}
	
	
	// **********************************************
	// mostrar o maior elemento do vetor original e sua posicao
	float maior = alturas[0];
	int pos;
	for(int i = 0; i < 7; i++) {
		if (alturas[i] > maior) {
			maior = alturas[i];
			pos = i;
		}	
	}
	printf("\nmaior altura: %.2f", maior);
	printf("\nna posicao: [%i]", pos);
	
	return 0;
}