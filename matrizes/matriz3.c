#include <stdio.h>

int main() {
	
	int A[2][3];
	float media;
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			printf("posicao %i,%i: ", i+1, j+1);
			scanf("%i", &A[i][j]);
			media += A[i][j];
		}
	}
	
//	Mostrando a matriz
	printf("\n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%i\t", A[i][j]);
		}
		printf("\n");
	}
	
//	maior elemento da matriz e menor elemento da matriz
	int maiorElemento = A[0][0];
	int menorElemento = A[0][0];
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			if(A[i][j] > maiorElemento) {
				maiorElemento = A[i][j];
			}
			if(A[i][j] < menorElemento) {
				menorElemento = A[i][j];
			}
		}
	}
	printf("\nMaior elemento: %i", maiorElemento);
	printf("\nMenor elemento: %i", menorElemento);
	
//	mostrar media dos elementos da matriz
	media = (float)media / 6;
	printf("\nMedia: %.2f", media);
	
//	quantos estao acima da media
	int acimaMedia = 0;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			if(A[i][j] > media) {
				acimaMedia++;
			}
		}
	}
	printf("\n%i alunos estao cima da media.", acimaMedia);
	
//	todos os elementos pares da matriz
	printf("\nElementos pares da matriz: ");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			if(A[i][j] % 2 == 0) {
				printf("%i ", A[i][j]);
			}
		}
	}
	
//	todos os elementos em colunas pares
	printf("\nElementos das colunas pares: ");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			if(j % 2 == 0) {
				printf ("%i ", A[i][j]);
			}
		}
	}

	return 0;
}