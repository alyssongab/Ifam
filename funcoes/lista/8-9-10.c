#include <stdio.h>
#include <math.h>

int entrada(){
   int numero;
 
  do{
     printf("Digite um numero: ");
     scanf("%d",&numero);
  }while(numero<0); 

  return numero;
}

float somaSequencia8 (int n) {
	float h;
	float num, denom  = 500;
	for(int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			num = 2;
		} else {
			num = 5;
		}
		h += num / denom;
		denom -= 50;
	}
	
	return h;
}

float somaSequencia9 (int n) {
	float h;
	float num = 1, denom = 1;
	for(int i = 0; i < n; i++) {
		h += num / pow(denom, 3);
		denom += 2;
	}
	
	return h;
}

float somaSequencia10 (int n) {
	float s;
	float num = 1, denom;
	for(int i = 0; i < n; i++) {
		s+= num / pow(num, 2);
		num++;
	}
	
	return s;
}

void menu () {
		printf("Resposta da questao:\n");
		printf("8. Questao 8\n");
		printf("9. Questao 9\n");
		printf("10. Questao 10\n");
		printf("0. Sair do menu\n");
		printf("Opcao: ");
}

int main () {
	
	int op, n;
	float h;
	
	do {
		
		menu();
		scanf("%i", &op);
		
		switch (op) {
			case 8: n = entrada();
					h = somaSequencia8(n); 
					printf("resultado: %.4f\n\n", h);
					break;
			
			case 9: n = entrada();
					h = somaSequencia9(n);
					printf("resultado: %.4f\n\n", h);
					break;
					
			case 10: n = entrada();
					 h = somaSequencia10(n);
					 printf("resultado: %.4f\n\n", h);
					 break;	
					 
			case 0: printf("saindo..\n\n");
					break;
			
			default: printf("valor invalido.\n\n");
					 break;
		}
		
	} while (op != 0);
	
	return 0;
}