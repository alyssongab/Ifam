#include <stdio.h>

int main () {
	
	int n, a, b, z = 999;
	
	printf("valor de n: ");
	scanf("%d", &n);
	
	printf("valor de a: ");
	scanf("%d", &a);
		
	printf("valor de b: ");
	scanf("%d", &b);
	
	if (n > 0) 
		
		if (a >= b) {
			z = a;
			b = b + 1;
			printf("a=%d, b=%d, z=%d", a, b, z);
		}	
	 
	else 
		z = b;
		printf("a = %d, b = %d, z = %d", a, b, z);
	
	
	return 0;
}

