#include <stdio.h>

int main () {
	
	int soma = 0;
	
	for (int i = 1; i <= 100; i++) {
		soma += i;
	}
	
	printf("somatorio de 1 a 100: %i", soma);
	
	return 0;
}