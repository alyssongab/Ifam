// Vetor: int V[] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 13};

#include <stdio.h>

int main() {
	
	int V[] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 13};
	int X = 1, Y = 3;
	
//	a) V[X + 0]
	printf("%i\n", V[X+0]);
	
//	b) V[X + 1]
	printf("%i\n", V[X+1]);
	
//	c) V[X + 2]
	printf("%i\n", V[X+2]);
	
//	d) V[X + 3]
	printf("%i\n", V[X+3]);
	
//	e) V[X * 0]
	printf("%i\n", V[X*0]);
	
//	f) V[X * 1]
	printf("%i\n", V[X*1]);
	
//	g V[X * 2]
	printf("%i\n", V[X*2]);
	
//	h) V[X * 2]
	printf("%i\n", V[V[X+Y]]);
	
//	i) V[X + Y]
	printf("%i\n", V[X+Y]);
	
//	j) V[7-V[1]]
	printf("%i\n", V[7-V[1]]);
	
//	l) V[V[3]]
	printf("%i\n", V[V[3]]);
	
//	m) V[V[V[6]]]
	printf("%i\n", V[V[V[6]]]);
	
//	n) V[V[0] * V[3]]
	printf("%i\n", V[V[0] * V[3]]);
	
//	0) V[X+3]
	printf("%i\n", V[X+3]);
	
	return 0;
}