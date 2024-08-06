#include <stdio.h>

int main() {
	
	int N;
	printf("quantos elementos: ");
	scanf("%i", &N);
	
	int A[N], B[N], C[N];
	
	printf("Para o vetor A:\n");
	for(int i = 0; i < N; i++) {
		printf("posicao %i: ", i+1);
		scanf("%i", &A[i]);
		printf("\n");
	}
	
	printf("Para o vetor B:\n");
	for(int i = 0; i < N; i++) {
		printf("posicao %i: ", i+1);
		scanf("%i", &B[i]);
		printf("\n");
	}
	printf("Para o vetor C:\n");	
	for(int i = 0; i < N; i++) {
		int aux = 0;
		
		if(i % 2 == 0) {
			C[i] = A[i/2];
		}
		else {
			C[i] = B[aux];
			aux++;
		}
	}
	
	for(int i = 0; i < N; i++) {
		printf("%i\n", C[i]);
	}
	
}