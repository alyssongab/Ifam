#include <stdio.h>
#include <math.h>

int main () {

    double valorAtraso, acresc, valorFinal, prejuizo;

    printf("Informe o valor em atraso: ");
    scanf("%lf", &valorAtraso);

    acresc = (0.15 * valorAtraso) + valorAtraso;
    valorFinal = acresc - (0.15 * acresc);
    prejuizo = valorAtraso - valorFinal;

    printf("Valor final a pagar: R$%.2lf", valorFinal);
    printf("\nPrejuizo do comerciante: R$%.2lf", prejuizo);

    return 0;
}
