#include <stdio.h>

int main() {
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num >= 0) {
		printf("\nO numero e positivo.");
	}
	else {
		printf("\nO numero e negativo");
	}	
	
	return 0;
}

