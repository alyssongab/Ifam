#include <stdio.h>

int main() {
	
	float alt, pesoIdeal;
	char sexo;
	
	printf("Informe sua altura: ");
	scanf("%f", &alt);
	
	printf("Informe seu sexo: ");
	scanf(" %c", &sexo);	/*espaco antes do caractere para limpar o 
							buffer (ao ser pressionado o enter no input anterior*/

	if (sexo == 'M' || sexo =='m') {
		pesoIdeal = (72.6*alt) - 58;
		printf("Peso ideal: %.1f", pesoIdeal);
	}
	else if (sexo == 'F' || sexo == 'f'){
		pesoIdeal = (62.1*alt) - 44.7;
		printf("Peso ideal: %.1f", pesoIdeal);
	}
	else {
		printf("Erro");
	}

	return 0;
}




