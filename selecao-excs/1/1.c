#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	printf("c�digo inteiro: ");
	scanf("%d", &num);	
	
	if (num >= 1 && num <= 100) {
		printf("Grupo 1");
	
	}	else if (num >= 101 && num <= 1000) {
		printf("Grupo 2");
	
	}	else if (num > 1000) {
		printf("Grupo 3");
	
	}	else {
		printf("C�digo inv�lido");
	}
	
	return 0;
}


