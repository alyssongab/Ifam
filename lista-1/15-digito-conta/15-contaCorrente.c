#include <stdio.h>
#include <math.h>

int main() {
	
	int num, a, b, c, numInvertido, 
	soma, A, B, C, verif, digito;
	
	printf("Digite um numero de 3 digitos: \n");
	scanf("%d", &num);
	
	a = num / 100; 		// algarismo das centenas
	
	b = (num % 100) / 10; 	// algarismo das dezenas
	
	c = num % 10; 		// algarismo das unidades
	
	/* printf("%d-%d-%d", a,b,c); */ 
	
	numInvertido = ((c*100)+(b*10)+a); // numero inserido invertido
	
	soma = num + numInvertido; // achar o valor de cada um dos algarismos da soma
	
	printf("Soma do numero inserido com seu invertido: %d\n", soma);
	
	A = soma / 100;
	
	B = (soma/10) % 10;
	
	C = soma % 10;
	
	verif = (A * 1) + (B * 2) + (C * 3);
	
	printf("Verificador da conta: %d\n", verif);
	
	digito = verif % 10;
	
	printf ("O digito verificador da conta e: %d", digito);
	
	return 0;
}



