#include <stdio.h>

int main () {
	
	// potencias de 3, de 0 até 15
	int cont = 0;
	int res = 1;
	
	while (cont <= 15) {
		if (cont == 0) {
			res = 1;
		}
		else if(cont == 1) {
			res = 3;
		}
		else {
			res *= 3;
		}
		printf("3 elevado a %i = %i\n", cont, res);
		cont++;
	}
	
	return 0;
}