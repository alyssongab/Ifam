#include <stdio.h>

int main() {

	int i, j;
	int mat[4][3];
	int sumEven = 0, sumOdd = 0, col;
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++) {
			printf("posicao %i,%i: ", i, j);
			scanf("%i", &mat[i][j]);
			if(j % 2 != 0) {
				sumOdd += mat[i][j];
				col = j;
			}
		}
	}
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++) {
			if(i % 2 == 0) {
				sumEven += mat[i][j];
			}
			
		}
		if(i % 2 == 0) {
			printf("\nsoma da linha %i: %i\n", i, sumEven);
			sumEven = 0;
		} 
	}
	
	printf("\nsoma da coluna %i: %i\n\n", col, sumOdd);
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%i\t", mat[i][j]);
		}
		printf("\n");
	}
	
//	printf("\n\nsoma de linhas pares: %i", sumEven);
//	printf("\nsoma de colunas impares: %i", sumOdd);
	
	return 0;
}