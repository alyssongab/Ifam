#include <stdio.h>

int main () {
	
	int len, num;
	int pares = 0, impares = 0;
	float mediaPares = 0, mediaImpares = 0;
	
	printf("A sequencia tera quantos numeros: ");
	scanf("%i", &len);
	
	for(int i = 0; i < len; i++) {
		printf("%io numero da sequencia: ", i+1);
		scanf("%i", &num);
		
		if(num % 2 == 0) {
			pares++;
			mediaPares += num;
			
		}
		else if(num % 2 != 0 && num % 3 == 0 && num % 7 == 0) {
			impares++;
			mediaImpares += num;
		}
	}
	
	mediaPares = mediaPares/pares;
	mediaImpares = mediaImpares/impares;
	
	printf("Quantidade de numeros pares: %i", pares);
	printf("\nQuantidade de numeros impares divisiveis por 3 e 7: %i", impares);
	printf("\nMedia dos numeros pares: %.2f", mediaPares);
	printf("\nMedia dos numeros impares divisiveis por 3 e 7: %.2f", mediaImpares);
}