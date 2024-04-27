#include <stdio.h>
#include <math.h>

int main () {
	
	int bin1, bin2, bin3, bin4, dec;
	
	printf("Digite um numero binario de 4 digitos:\n");
	
	printf("Digito 1: \n");
	scanf("%d", &bin1);
	
	printf("Digito 2: \n");
	scanf("%d", &bin2);
	
	printf("Digito 3: \n");
	scanf("%d", &bin3);
	
	printf("Digito 4: \n");
	scanf("%d", &bin4);
	
	printf("Numero binario: %d%d%d%d \n", bin1, bin2, bin3, bin4);
	
	bin4 = (pow(2,0)) * bin4;
	bin3 = (pow(2,1)) * bin3;
	bin2 = (pow(2,2)) * bin2;
	bin1 = (pow(2,3)) * bin1;
	
	dec = bin1 + bin2 + bin3 + bin4;
	
	printf("Convertido para valor decimal: %d", dec);
	
	return 0;
}
