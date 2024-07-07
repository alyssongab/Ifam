#include <stdio.h>

int main () {
	
	double pontos;
	int notasBaixas = 0;
	int notasAltas = 0;
	
	do {
		printf("nota: ");
		scanf("%lf", &pontos);
		
		if (pontos < 6 && pontos >= 0) {
			notasBaixas++;
		}
		if (pontos >= 6 && pontos <= 10) {
			notasAltas++;
		}
		
	} while (pontos >= 0 && pontos <= 10);
	
	printf("quantidade de:\n");
	printf("notas baixas: %i", notasBaixas);
	printf("\nnotas altas: %i", notasAltas);
}