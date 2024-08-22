#include <stdio.h>
#include <ctype.h>

float calcularPesoIdeal(float altura, char sexo) {
	
	float pesoIdeal;
	
	if (sexo == 'M') {
		pesoIdeal = (72.6 * altura) - 58;
	} else if (sexo == 'F') {
		pesoIdeal = (62.1 - altura) - 44.7;
	}
	
	return pesoIdeal;
}

int main() {
	
	float h, pesoIdeal;
	char s;
	
	printf("altura: ");
	scanf("%f", &h);
	printf("sexo: ");
	scanf(" %c", &s);
	s = toupper(s);
	
	pesoIdeal = calcularPesoIdeal(h, s);
	printf("peso ideal: %.2f", pesoIdeal);
	
	return 0;
}