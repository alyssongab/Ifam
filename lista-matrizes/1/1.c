// Tabela NxN;
// Achar o maior valor
// Multiplicar cada elemento da diagonal principal pelo maior valor


#include <stdio.h>

int main() {
	
	int N;
	
	printf("numero de linhas e colunas: ");
	scanf("%i", &N);
	
	float mat[N][N];
	float maior = mat[0][0];
	
//	Recebendo valores e maior elemento
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			printf("posicao %i,%i: ", i+1, j+1);
			scanf("%f", &mat[i][j]);
			if(mat[i][j] > maior) {
				maior = mat[i][j];
			}
		}
	}
	
//	Mostrando a matriz
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			printf("%.1f\t", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("maior elemento: %f\n", maior);
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(i == j) {
				printf("%f x %f = %.2f\n", mat[i][j], maior, mat[i][j]*maior);
			}
		}
	}
	
	return 0;
}
