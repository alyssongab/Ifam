#include <stdio.h>

float maiorValor(float a, float b, float c) {
	
	float reais[3] = {a, b, c};
	float maior = reais[0];
	
	for(int i = 0; i < 3; i++) {
		if (reais[i] > maior) {
			maior = reais[i];
		}
	}
	
	return maior;
}

int main() {
	
	float a, b, c;
	float maior;
	
	printf("3 valores reais: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	maior = maiorValor(a, b, c);
	printf("maior valor: %.2f", maior);
	
	return 0;
}