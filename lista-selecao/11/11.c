#include <stdio.h>

int main () {
	
	double valor, valorDesc;
	
	printf("valor total da compra: R$ ");
	scanf("%lf", &valor);
	
	if (valor >= 100 && valor < 200) {
		valorDesc = valor - (valor*0.1);
		printf("10%% de desconto! \n");
		printf("valor com o desconto: R$%.2lf", valorDesc);
	}
		else if (valor >= 200 && valor < 300) {
			valorDesc = valor - (valor*0.15);
			printf("15%% de desconto! \n");
			printf("valor com o desconto: R$%.2lf", valorDesc);
	}
		else if (valor >= 300) {
			valorDesc = valor - (valor*0.2);
			printf("20%% de desconto! \n");
			printf("valor com o desconto: R$%.2lf", valorDesc);
	}
		else {
			printf("Sem desconto!");
					
	}
	
	return 0;
}

//Fa�a um programa que implemente um sistema de descontos em uma loja. O programa deve ler o valor
//total da compra e aplicar um desconto de acordo com a faixa de valor:
//� Acima de R$ 100: 10% de desconto
//� Acima de R$ 200: 15% de desconto
//� Acima de R$ 300: 20% de desconto

