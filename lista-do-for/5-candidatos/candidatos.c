#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int lula = 0;
	int bolsonaro = 0;
	int dilma = 0;
	int temer = 0;
	int nulo = 0;
	int branco = 0;
	float total, pLula, pBol, pDilma, pTemer, pNulo, pBranco;
	
	printf("Candidatos:\n");
	printf("[0] Finalizar votacao\n");
	printf("[1] Lula\n");
	printf("[2] Bolsonaro\n");
	printf("[3] Dilma\n");
	printf("[4] Temer\n");
	printf("[5] Voto nulo\n");
	printf("[6] Votar em branco\n");
	
	int opcao;
	
	do {
	
		printf("Voto: ");
		scanf("%i", &opcao);
		
		switch(opcao) {
			case 0: system("cls");
			puts("VOTACAO FINALIZADA");
			break;
					
			case 1: lula++;
			break;
			
			case 2: bolsonaro++;
			break;
			
			case 3: dilma++;
			break;
			
			case 4: temer++;
			break;
			
			case 5: nulo++;
			break;
			
			case 6: branco++;
			break;
			
			default: puts("Opcao invalida!");
			break;
			
		}
		
		if (opcao != 0) {
			total++;
		}
		
	} while (opcao != 0);
	
	if (total == 0) {
		puts("Nao houve votos.");
	} else {
	
		pLula = (lula / total) * 100;
		pBol = (bolsonaro / total) * 100;
		pDilma = (dilma / total) * 100;
		pTemer = (temer / total) * 100;
		pNulo = (nulo / total) * 100;
		pBranco = (branco / total) * 100;
		
		printf("Lula: %i votos - %.2f%% dos votos.\n", lula, pLula);
		printf("Bolsonaro: %i votos - %.2f%% dos votos.\n", bolsonaro, pBol);
		printf("Dilma: %i votos - %.2f%% dos votos.\n", dilma, pDilma);
		printf("Temer: %i votos - %.2f%% dos votos.\n", temer, pTemer);
		printf("Nulo: %i votos - %.2f%% dos votos.\n", nulo, pNulo);
		printf("Em branco: %i votos - %.2f%% dos votos.\n", nulo, pBranco);
	}
	
	return 0;
}