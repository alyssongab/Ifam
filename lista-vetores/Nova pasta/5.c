#include <stdio.h>

int main() {
	
	int N, aux = 0;
	printf("quantos elementos: ");
	scanf("%i", &N);
	
	int A[N], B[N], C[N];
	
	printf("\nPara o vetor A:\n");
	for(int i = 0; i < N; i++) {
		printf("posicao %i: ",i);
		scanf("%i", &A[i]);
	}
	
	printf("\nPara o vetor B:\n");
	for(int i = 0; i < N; i++) {
		printf("posicao %i: ", i);
		scanf("%i", &B[i]);
	}
	
	printf("\nPara o vetor C:\n");	
	for(int i = 0; i < N; i++) {
		
		if(i % 2 == 0) {
			C[i] = A[i/2];
		}
		else {
			C[i] = B[aux];
			aux++;
		}
	}
	
	for(int i = 0; i < N; i++) {
		printf("posicao %i\n", C[i]);
	}
	
//	C[0] = A[0]
//	C[1] = B[0]
//	C[2] = A[1]
//	C[3] = B[1]
	
	return 0;
}