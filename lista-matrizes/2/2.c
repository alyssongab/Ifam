// Matriz NxN
// Produto separado dos numeros:
// - acima da diagonal principal
// - abaixo da diagonal principal
// - na propria diagonal principal

#include <stdio.h>

int main() {
	
	int N;
	
	printf("numero de linhas e colunas: ");
	scanf("%i", &N);
	
	int mat[N][N];
	int produtoAcima = 1, produtoAbaixo = 1, produtoPrincipal = 1;
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			printf("posicao %i,%i: ", i+1, j+1);
			scanf("%i", &mat[i][j]);
			
			if (i == j) {
				produtoPrincipal *= mat[i][j];
			}
			if(j > i) {
				produtoAcima *= mat[i][j];
			}
			if(j < i) {
				produtoAbaixo *= mat[i][j];
			}
		}
	}
	
	printf("produto diagonal principal: %i", produtoPrincipal);
	printf("\nproduto acima da diagonal principal: %i", produtoAcima);
	printf("\nproduto abaixo da diagonal principal: %i", produtoAbaixo);
	
	return 0;
}
