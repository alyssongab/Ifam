# include <stdio.h>

int main() {
	
	int base;
	int exp, expPositivo;
	int res = 1;
	
	printf("base: ");
	scanf("%i", &base);
	
	printf("expoente: ");
	scanf("%i", &exp);
	
	if (exp == 0) {
		res = 1;
	}
	else if (exp < 0) {
		expPositivo = exp * (-1);
	}
	else {
		expPositivo = exp;
	}
	int cont = 1;
	while (cont <= expPositivo) {
		res *= base;
		cont++;
	}
	
	if (exp < 0) {
		printf("resultado de %i elevado a %i = 1/%i", base, exp, res);
	}
	else {
		printf("resultado de %i elevado a %i = %i", base, expPositivo, res);
	}

	return 0;
}