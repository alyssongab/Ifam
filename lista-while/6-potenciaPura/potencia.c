# include <stdio.h>

int main() {
	
	int base;
	int exp;
	int res = 1;
	
	printf("base: ");
	scanf("%i", &base);
	
	printf("expoente: ");
	scanf("%i", &exp);
	
	int cont = 1;
	while (cont <= exp) {
		res *= base;
		cont++;
	}
	
	printf("resultado de %i elevado a %i = %i", base, exp, res);
	
	return 0;
}