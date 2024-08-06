#include <stdio.h>
#include <ctype.h>

int main () {
	
	// variaveis principais
	int N, idade;
	char nota;
	
	//variaveis notas
	int otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
	
	// variaveis especificas
	int miOtimo = 0, miRuim = 0, idadesPessimo = 0, miDif;
	float porcentoBom, porcentoRegular, porcentoDif, media;
	
	printf("quantidade de pessoas: ");
	scanf("%i", &N);
	
	for(int i = 1; i <= N; i++) {
		printf("\nPESSOA %i:\n", i);
		printf("idade: ");
		scanf("%i", &idade);
		fflush(stdin);
		
		printf("nota: ");
		scanf("%c", &nota);
		nota = toupper(nota);
		
		switch (nota) {
			case 'A': otimo++;
			if(idade > miOtimo) {
				miOtimo = idade;
			}
			break;
			
			case 'B': bom++;
			break;
			
			case 'C': regular++;
			break;
			
			case 'D': ruim++;
			if(idade > miRuim) {
				miRuim = idade;
			}
			break;
			
			case 'E': pessimo++;
			idadesPessimo += idade;
			break;
			
			default: printf("Valor invalido\n");
			break;
		}
	}
		
//		letra b
		porcentoBom = (float) bom / N * 100;
		porcentoRegular = (float) regular/N * 100;
		porcentoDif = porcentoBom - porcentoRegular;
		
		if (porcentoRegular > porcentoBom) {
			porcentoDif *= -1;
		}

//		letra c
		if(pessimo) {
			media = (float)idadesPessimo / pessimo;
		}
		
//		letra d
		if(miOtimo > miRuim) {
			miDif = miOtimo - miRuim;
		} else {
			miDif = miRuim - miOtimo;
		}
		
	printf("a) quantidade de respostas OTIMO: %i\n", otimo);
	printf("b) diferenca percentual entre BOM e Regular: %.2f%%\n", porcentoDif);
	printf("c) media das idades das pessoas que responderam PESSIMO: %f\n", media);
	printf("d) diferenca da maior idade de OTIMO e maior idade de RUIM: %i", miDif);
	
	return 0;
}