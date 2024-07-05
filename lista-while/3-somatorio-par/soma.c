#include <stdio.h>

int main () {
	
	int somatorio = 0;
	int cont = 1;
	
	while (cont <= 500) {
		if (cont % 2 == 0) {
			somatorio += cont;
		}
		cont++;
	}
	
	printf("somatorio = %i", somatorio);
	
	return 0;
}