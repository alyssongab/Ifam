#include <stdio.h>

int main() {
	
	int N, num, aux = 0;
	
	printf("quantos elementos: ");
	scanf("%i", &N);
	
	int A[N];

	printf("insira um valor para variavel num: ");
	scanf("%i", &num);
	
	for(int i = 0; i < N; i++) {
		printf("posicao %i: ", i+1);
		scanf("%i", &A[i]);
		printf("\n");
		
		if(A[i] == num) {
			printf("valor encontrado na posicao [%i]", i+1);
			aux = 1;
			break;
		}
	}

	if (aux != 1) {
		printf("valor nao esta no vetor");
	}
	
	return 0;	
}