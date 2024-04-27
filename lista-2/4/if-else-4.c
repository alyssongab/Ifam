#include <stdio.h>

int main() {
	
	float salario;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	if (salario >= 1000 && salario <= 2000) {
		salario = (0.1 * salario) + salario;
		printf("Novo salario: %.2f", salario);
	}
	else {
		printf("Sem aumento"); 
	} 
	
	return 0;
}


