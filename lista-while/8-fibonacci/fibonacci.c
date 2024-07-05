#include <stdio.h>

// Fibonacci

int main () {
	
	int ini = 1;
	int next = 1;
	int res;

	printf("Sequencia de fibonacci ate o 15o termo\n");
	
	printf("\n[%i, %i, ", ini, next);
	for (int i = 1; i <= 15; i++) {
		res = ini + next;
		ini = next;
		next = res;
		printf("%i", res);
		if (i != 15) {
			printf(", ");
		}
		
	}
	printf("]\n");
	
	return 0;
}

// ini next res
// 1 + 1 = 2 
// 1 + 2 = 3
// 2 + 3 = 5
// 5 + 3 = 8