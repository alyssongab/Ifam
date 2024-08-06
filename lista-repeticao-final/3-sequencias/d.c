#include <stdio.h>
#include <math.h>

int main() {
	
	int len, num = 1, denom = 1;
	float div, sum = 0;
	
	printf("quantidade de numeros na sequencia: ");
	scanf("%i", &len);
	
	for(int i = 1; i <= len; i++) {
		div = (float) num / pow(denom, 3);
		
		if(i % 2 == 0) {
			div *= -1;
		}
		
		printf("%i / (%i ^ 3)\n", num, denom);
		printf("%f\n\n", div);
		
		sum += div;
		denom += 2;
	}
	
	printf("soma da sequencia = %.3f", sum);
	
	return 0;
}