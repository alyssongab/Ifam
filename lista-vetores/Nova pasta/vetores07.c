#include <stdio.h>

int main() {
	
	int n;
	scanf("%i", &n);
	
	int vetor[n], qtd = 0;
	int locacoes[n];

	for(int i = 0; i < n; i++) {
		scanf("%i", &vetor[i]);
		if(vetor[i] >= 10) {
			qtd = vetor[i] / 10;
			locacoes[i] = qtd;
		} else {
			locacoes[i] = 0;
		}
	}
	
	for(int i = 0; i < n; i++) {
		printf("%i\t", locacoes[i]);
	}
	
	return 0;
}