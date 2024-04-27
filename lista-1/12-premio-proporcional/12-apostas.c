#include <stdio.h>
#include <math.h>

int main () {
	
	double premio, ap1, ap2, ap3, total, win1, win2, win3 ;
	
	printf("Qual o valor do premio? R$");
	scanf("%lf", &premio);
	
	printf("\nQual o apostador 1 investiu? R$");
	scanf("%lf", &ap1);
	
	printf("\nQual o apostador 2 investiu? R$");
	scanf("%lf", &ap2);
	
	printf("\nQual o apostador 3 investiu? R$");
	scanf("%lf", &ap3);
	
	total = ap1 + ap2 + ap3;
	
	win1 = (ap1/total) * premio;
	win2 = (ap2/total) * premio;
	win3 = (ap3/total) * premio;
	
	printf("\nPremio do apostador 1: R$ %.2lf", win1);
	printf("\nPremio do apostador 2: R$ %.2lf", win2);
	printf("\nPremio do apostador 3: R$ %.2lf", win3);
	
	return 0;
}
