#include <stdio.h>

int main() {
	
	int mat[3][3];
	int acm = 0;
	
	for(int i = 0; i < 3; i++) {
		
		for(int j = 0; j < 3; j++) {
			printf("posicao %i,%i: ", i+1, j+1);
			scanf("%i", &mat[i][j]);
			acm += mat[i][j];
		}
	}
	
	printf("\n");
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%i\t", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\nsoma da matriz: %i", acm);
	
	return 0;
}