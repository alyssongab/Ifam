#include <stdio.h>
#include <math.h>

int main () {
	
	int H, M, S, T;
	
	printf("horas: ");
	scanf("%i", &H);
	
	printf("minutos: ");
	scanf("%i", &M);
	
	printf("segundos: ");
	scanf("%i", &S);
	
	printf("tempo adiado (segundos): ");
	scanf("%i", &T);
	
	if (H >= 0 && H <= 23) {
		if (M >= 0 && M <= 59) {
			if (S >= 0 && S <= 59) {
				if (T >= 0 && T <= pow(10,9)) {
					// Converter tudo para segundos
					int totalSegundos = H*3600 + M*60 + S + T;
					H = (totalSegundos / 3600) % 24; // %24 para deixar o número no formato 24h
					M = (totalSegundos % 3600) / 60;
					S = (totalSegundos % 3600) % 60;
				} else {
					printf("Valor de segundos invalido");
				}	
			} else {
				printf("Valor de segundos invalido");
			}
		} else {
			printf("Valor de minutos invalido");
		}
	} else {
		printf("Valor de horas invalido");
	}
	
	printf("o novo horario sera %i:%i:%i", H, M, S);
	
	return 0;
	
}