#include <stdio.h>

int main () {
	
	// idade -> correto: data de nasc. / incorreto: continuar;
	int age, anoNasc;
	
	do {
		printf("idade: ");
		scanf("%i", &age);
		
	} while (age <= 0 || age >= 117);
	
	do {
		printf("ano de nascimento: ");
		scanf("%i", &anoNasc);
	} while (anoNasc >= 2024);
	
	printf("%i\n", age);
	printf("%i", anoNasc);
	
	return 0;
}