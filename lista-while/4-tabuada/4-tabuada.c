#include <stdio.h>

// Tabuada

int main() {
	
	int num;
	int res = 1;
	
	printf("escolha um numero: ");
	scanf("%i", &num);
	
	for (int i = 1; i <= 10; i++) {
		res = num * i;
		printf("%i x %i = %i\n", num, i, res);
	}

	return 0;	
}
