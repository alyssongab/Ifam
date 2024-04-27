#include <stdio.h>

int main() {
	
	float n1,n2,n3,n4,m;
	
	printf("nota 1: ");
	scanf("%f", &n1);
	
	printf("nota 2: ");
	scanf("%f", &n2);
	
	printf("nota 3: ");
	scanf("%f", &n3);
	
	printf("nota 4: ");
	scanf("%f", &n4);
	
	m = (n1+n2+n3+n4)/4;
	
	printf("media: %.1f \n", m);
	
	if (m >= 6 && m <=10){
		printf("Aprovado");
	}
		else if (m>=0 && m < 2){
		printf("Reprovado");
	}
			else if (m >= 2 && m < 6){
		printf("Exame final");
	}			
				else {
		printf("erro");
	}
	
	return 0;	
}


