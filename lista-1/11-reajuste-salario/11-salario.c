#include <stdio.h>

int main() {
	
	float r, sm23, sm24;
	
	r = 0.0697;
	
	printf("Salario minimo em 2023: \n");
	scanf("%f", &sm23);
	
	sm24 = (r*sm23) + sm23;
	
	printf("Salario minimo em 2024: %.2f", sm24);
	
	return 0;
}
