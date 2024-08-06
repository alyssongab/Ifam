#include <stdio.h>

int main() {
	
	char CRR[] = {'!', 'U', 'O', 'T', 'R', 'E', 'C', 'A'};
	char Aux;
	int i;
	
	for(i = 1; i <=3; i++) {
		Aux = CRR[i];
		CRR[i] = CRR[6-i+1];
		CRR[6-i+1] = Aux;
	}
	
	Aux = CRR[0];
	CRR[0] = CRR[7];
	CRR[7] = Aux;
	
	for(i = 0; i < 8; i++) {
		printf("%c", CRR[i]);
	}
}