#include <stdio.h>
#include <math.h>

int main () {

    double custoTotal, precoIngresso;
    int qtd;

    printf("Custo total do circo: ");
    scanf("%lf", &custoTotal);

    printf("Preco do ingresso: ");
    scanf("%lf", &precoIngresso);

    qtd = (ceil(custoTotal / precoIngresso));

    printf("Quantidade minima de ingressos para que o custo total seja coberto: %d", qtd);

    return 0;
}
