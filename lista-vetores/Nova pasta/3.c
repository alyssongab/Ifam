#include <stdio.h>

int main() {
	
	float temps[7];
	float media;
	int dias = 0;
	float maior, menor;
	
	for(int i = 0; i < 7; i++) {
		printf("temperatura dia %i: ", i+1);
		scanf("%f", &temps[i]);
		printf("\n");
		fflush(stdin);
		media += temps[i];
	}
	
	maior = menor = temps[0];
	media = media/7;
	printf("%.2f\n", media);
	
	for(int i = 0; i < 7; i++) {
		if (temps[i] > media) {
			dias++;
		}
	}
	
	printf("%i dias foram maior que a media\n", dias);
	
	for(int i = 0; i < 7; i++) {
		if(temps[i] > maior) {
			maior = temps[i];
		}
		if (temps[i] < menor) {
			menor = temps[i];
		}
	}
	
	printf("maior temperatura: %.2f", maior);
	printf("\nmenor temperatura: %.2f", menor);
	
}