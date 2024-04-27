#include <stdio.h>
#include <math.h>

int main () {
	
	float kmi, kmf, ti, tf, vm;
	
	printf("Quilometro inicial: ");
	scanf("%f", &kmi);
	
	printf("\nQuilometro final: ");
	scanf("%f", &kmf);
	
	printf("\nHora de partida: ");
	scanf("%f", &ti);
	
	printf("\nHora de chegada: ");
	scanf("%f", &tf);
	
	vm = (kmf-kmi)/(tf-ti);
	
	printf("\nVelocidade media: %.1f km/h", vm);
	
	return 0;
}
