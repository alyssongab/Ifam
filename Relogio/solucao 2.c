#include <stdio.h>

int main () {
	
	int h, m, s, t;
	char[4] dados = {"h", "m", "s", "t"};

	printf("horas: ");
	scanf("%i", &H);
	
	printf("minutos: ");
	scanf("%i", &M);
	
	printf("segundos: ");
	scanf("%i", &S);
	
	printf("tempo adiado (segundos): ");
	scanf("%i", &T);
	
	for (int i = 0; i < T; i++) {
		s++;
		if (s == 60) {
			m++
			if(m == 60) {
				h++
				if (h == 24) {
					h = 0;
				}
			}
		}
	}

	return 0;
}