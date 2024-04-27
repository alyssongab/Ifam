#include <stdio.h>
#include <math.h>

int main() {
	
	int valor, 
	n100 = 0, 
	n50 = 0, 
	n20 = 0, 
	n10 = 0;

	printf("valor para sacar: R$ ");
	scanf("%d", &valor);
	
	

/* 	------------------------------ MÉTODO 1 - SEM IF / ELSE --------------------

	n100 = valor / 100;
	valor %= 100;

	n50 = (valor % 100) / 50;
	valor %= 50;

	n20 = (valor % 50) / 20;
	valor %= 20;

	n10 = (valor % 20) / 10;

	printf("notas de 100: %d", n100);
	printf("\nnotas de 50: %d", n50);
	printf("\nnotas de 20: %d", n20);
	printf("\nnotas de 10: %d", n10);

	------------------------------ MÉTODO 2 - COM IF / ELSE -------------------- */

	if (valor >= 100) {
		n100 = valor / 100;
		valor %= 100;

	}

	if (valor >= 50) {
		n50 = valor / 50;
		valor %= 50;
	}

	if (valor >= 20) {
		n20 = valor / 20;
		valor %= 20;
	}

	if (valor >= 10) {
		n10 = valor / 10;
	}

	printf("notas de 100: %d", n100);
	printf("\nnotas de 50: %d", n50);
	printf("\nnotas de 20: %d", n20);
	printf("\nnotas de 10: %d", n10);

	return 0;
}

//Desenvolva um programa que simule um caixa eletr�nico. O usu�rio deve inserir o valor que deseja sacar
//e o programa deve informar quantas notas de cada valor ser�o entregues (considere notas de R$100,
//R$50, R$20 e R$10).


