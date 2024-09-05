#include <stdio.h>

int main() {
	
	int n;
	printf("numero de posicoes de a e b: ");
	scanf("%i", &n);
	
	int A[n], B[n], soma = 0;
	
	for(int i = 0; i < n; i++) {
		printf("A[%i]: ", i);
		scanf("%i", &A[i]);
		printf("B[%i]: ", i);
		scanf("%i", &B[i]);
	}
		
	for(int i = 0; i < n; i++) {
		soma += A[i] - B[n-i];
	}
		
	printf("soma: %i", soma);
	
	return 0;
}