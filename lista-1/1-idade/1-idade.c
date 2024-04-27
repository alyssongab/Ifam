#include <stdio.h>
#include <math.h>

int main() {
	
	int yr, age, born, ft;
	
	printf("Ano atual: \n");
	scanf("%d", &yr);
	
	printf("Idade: \n");
	scanf("%d", &age);
	
	born = yr - age;
	
	ft = 2034 - born;
	
	printf("Ano de nascimento: %d \n", born);

	printf("Idade em 2034: %d", ft);
	

	return 0;
	
	/* nt = %d
	 float = %f
	 double = %lf
	 char = %c
	 char[] = %s */
	 
	
}
