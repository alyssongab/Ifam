#include <stdio.h>

float velocidadeMedia(float kmIni, float kmFim, float horaIni, float horaFim) {
	
	float velMedia = (kmFim - kmIni) / (horaFim - horaIni);
	return velMedia;
}

int main() {
	
	float kmIni, kmFim, horaIni, horaFim;
	printf("km inicial: ");
	scanf("%f", &kmIni);
	printf("km final: ");
	scanf("%f", &kmFim);
	printf("hora inicial: ");
	scanf("%f", &horaIni);
	printf("hora final: ");
	scanf("%f", &horaFim);
	
	printf("velocidade media: %.2fkm/h", velocidadeMedia(kmIni,kmFim,horaIni,horaFim));
	
	return 0;
}