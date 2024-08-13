#include <stdio.h>

int main() {
	
	float A[2][3], B[2][3], C[2][3];
	
	printf("MATRIZ A:\n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			printf("posicao %i,%i: ", i+1, j+1);
			scanf("%f", &A[i][j]);
		}
	}
	
	printf("MATRIZ B:\n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			printf("posicao %i,%i: ", i+1, j+1);
			scanf("%f", &B[i][j]);
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	printf("\nMATRIZ C:\n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%.1f\t", C[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}