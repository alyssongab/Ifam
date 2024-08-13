// Matriz M (3x3)
// multiplicar cada elemento por um valor A
// Colocar cada valor em um vetor [9]

#include <stdio.h>

int main() {
	
	int M[3][3], A;
	int aux = 0, V[9];
	
	printf("valor de A: ");
	scanf("%i", &A);
	printf("\n");
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("posicao %i,%i: ", i+1, j+1);
			scanf("%i", &M[i][j]);
			V[aux] = M[i][j] * A;
			aux++;
		}
	}
	
	printf("Vetor [9]: \n[ ");
	for(int i = 0; i < 9; i++) {
		printf("%i ", V[i]);
	}
	printf("]");
	
	return 0;
}