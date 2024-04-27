#include <stdio.h>

int main() {
	
	float alt, pesoIdeal;
	char sexo;
	
	printf("Informe sua altura: ");
	scanf("%f", &alt);
	
	printf("Informe seu sexo: ");
	scanf(" %c", &sexo);
	
	if (sexo == 'm' || sexo == 'M') {
		pesoIdeal = (72.6*alt) - 58;
		printf("Peso ideal: %.1f", pesoIdeal);
	}
	else if (sexo == 'f' || sexo == 'F'){
		pesoIdeal = (62.1*alt) - 44.7;
		printf ("Peso ideal: %.1f", pesoIdeal);
	}
	else {
		printf("Erro");
	}
	
	return 0;
}

