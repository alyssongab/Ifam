#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	char letra;
	
	printf("Digite a inicial do seu estado civil: ");
	scanf("%c", &letra);
	
	letra = toupper(letra);
	
	switch (letra) {
		
		case 'C': printf("Casado(a)");
		break;
		
		case 'S': printf("Solteiro(a)");
		break;
		
		case 'Q': printf("Desquitado(a)");
		break;
		
		case 'D': printf("Divorciado(a)");
		break;
		
		case 'V': printf("Viúvo(a)");
		break;
		
		default: printf("Inválido");
		break;
	}
	
	return 0;
}
