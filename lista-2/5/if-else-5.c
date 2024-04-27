#include <stdio.h>

int main() {
	
	// bonus de 20% do salario para: tempo de empresa >= 5 anos
	// 15% para os demais
	
	int tempo;
	float salario, bonus;
	
	printf("Tempo de trabalho na empresa, em anos: ");
	scanf("%d", &tempo);
	
	printf("\nInforme seu salario: ");
	scanf("%f", &salario);
	
	if (tempo >= 5) {
		bonus = (0.2*salario);
		printf("Valor do bonus: %.2f", bonus);
	}
	else {
		bonus = (0.15*salario);
		printf("Valor do bonus: %.2f", bonus);
	}
	
	return 0;
}


