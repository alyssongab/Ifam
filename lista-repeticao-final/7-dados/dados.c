#include <stdio.h>

int main() {
	
	int odds = 0;
	int dado1, dado2;
	
	for(dado1 = 1; dado1 <= 6; dado1++) {
		for(dado2 = 1; dado2 <= 6; dado2++) {
			if (dado2 + dado1 == 7) {
				printf("%i + %i = 7\n", dado1, dado2);
				odds++;
			}
		}
	}
	
	printf("odds: %i", odds);
	
	return 0;
}