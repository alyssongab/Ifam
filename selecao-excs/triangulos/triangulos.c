#include <stdio.h>

int main() {
	
	int a,b,c;
	
	printf("lado a: ");
	scanf("%d", &a);
	
	printf("lado b: ");
	scanf("%d", &b);
	
	printf("lado c: ");
	scanf("%d", &c);
	
	if (a+b > c && a+c > b && b+c > a) {
		
		if (a != b && a != c && b != c) {
			
			printf("triangulo escaleno");
			
		}	else if (a == b && a == c) {
					
				printf("triangulo equilatero");
									
		}		else  {
						
					printf("triangulo isosceles");
						
		}
		
	}	else {
		
		printf("nao e um triangulo.");
		
	}
	
	return 0;
}

