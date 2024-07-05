#include <stdio.h>

int main () {

	int N, num;
	int menor, maior;
	int cont = 1;
	
	printf("quantos numeros serao contados: ");
	scanf("%i", &N);
	printf("\n---------------------------------\n");
	
	printf("\ninforme o primeiro numero: ");
	scanf("%i", &num);
	
	menor = num;
	maior = num;
	
	while (cont <= N-1) { 
		printf("\ninforme o %io. numero: ", cont+1);
		scanf("%i", &num);
		if (num < menor) {
			menor = num;
		}
		if (num > maior) {
			maior = num;
		}
		
		cont++;
	}
	
	printf("\n---------------------------------\n");
	printf("menor numero: %i", menor);
	printf("\nmaior numero: %i", maior);

	return 0;
}