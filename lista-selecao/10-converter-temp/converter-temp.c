#include <stdio.h>
#include <ctype.h>

int main() {
	
	double temp, c, f, k;
	char origem, destino;
	
	printf("escolha a unidade de temperatura:\n(C)Celsius\n(F)Fahrenheit\n(K)Kelvin\n" );
	scanf("%c", &origem);
	origem = toupper(origem);
	
	printf("informe a temperatura na unidade selecionada:\n");

	scanf("%lf", &temp);
	
	if (origem == 'C') {
	
		printf("converter para?:\n(F)Fahrenheit\n(K)Kelvin\n");
		scanf(" %c", &destino);
		destino = toupper(destino);
		
		switch (destino) {
			
			case 'F':
				f = (temp*1.8) + 32;
				printf("celsius para fahrenheit: %.1lf", f);
				break;
			
			case 'K':
				k = temp + 273.15;
				printf("celsius para kelvin: %.1f", k);
				break;
		}
		
	} 
	
	else if (origem == 'F') {
		
		printf("converter para?:\n(C)Celsius\n(K)Kelvin\n");
		scanf(" %c", &destino);	
		destino = toupper(destino);
		
		switch (destino) {
			
			case 'C':
				c = (temp - 32) / 1.8;
				printf("fahrenheit para celsius: %.1lf", c);
				break;
				
			case 'K':
				k = ((temp-32) * 5/9 ) + 273.15;
				printf("fahrenheit para kelvin: %.1lf", k);
				break;
		}
		
	}
	
	else if (origem == 'K') {
		
		printf("converter para?:\n (C)Celsius\n (F)Fahrenheit\n");
		scanf(" %c", &destino);
		destino = toupper(destino);
		
		switch (destino) {
			
			case 'C':
				c = temp - 273.15;
				printf("kelvin para celsius: %.1lf", c);
				break;
				
			case 'F':
				f = ((temp-273.15)*1.8) + 32;
				printf("kelvin para fahrenheit: %.1lf", f);
				break;	
		}
		
	} else {
		
		printf("erro.");
	
	}
	
	return 0;
}
