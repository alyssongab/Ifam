#include <stdio.h>

int anosNecessarios () {
	
	int anos = 0;
	float a = 1.50, f = 1.10;
	
	while(!(f > a)) {
		a += 0.02;
		f += 0.03;
		anos++;
	}
	
	return anos;
}

int main() {
	
	printf("serao necessario %i anos.", anosNecessarios());
	
	return 0;
}