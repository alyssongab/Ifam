#include <stdio.h>

int fatorial(int n){
   int i,fat=1;
   for(i=1;i<=n;i++)
     fat=fat*i; 

   return fat;
}

int calculo() {
	int N = fatorial(5);
	int K = fatorial(3);
	int C = N / (K * (fatorial(N-K)));
	return C;
}

int main() {

	int N, K;

	printf("valor de N: ");
	scanf("%i", &N);
	
	printf("valor de K: ");
	scanf("%i", &K);

	
	return 0;
}