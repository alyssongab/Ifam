#include <stdio.h>
#include <math.h>

double calcularDistancia (double x1, double x2, double y1, double y2) {
	
	double x, y;
	
	x = pow((x2-x1), 2);
	y = pow((y2-y1), 2);
	
	return sqrt(x+y);
}

int main() {
	
	double x1, x2, y1, y2;
	double distancia;
	
	scanf("%lf", &x1);
	scanf("%lf", &x2);
	scanf("%lf", &y1);
	scanf("%lf", &y2);
	
	distancia = calcularDistancia(x1, x2, y1, y2);
	printf("distancia entre os pontos (%.0lf, %.0lf) e (%.0lf, %0.lf) = %.2lf", x1, y1, x2, y2, distancia);
	
	return 0;
}