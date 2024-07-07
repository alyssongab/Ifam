#include <stdio.h>

int main () {
	
	// ana: 1,50 -> 2cm / ano
	// feli: 1,18 -> 3cm / ano
	// 1 iteração -> 1 ano
	double a = 1.50;
	double f = 1.10;
	int t = 0;
	
	do {
		a+= 0.02;
		f+= 0.03;
		t++;
		
	} while (a >= f);
	
	printf("tempo necessario: %i", t);
	
	return 0;
}