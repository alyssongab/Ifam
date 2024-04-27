#include <stdio.h>

int main () {

    double c, l, precoMetro, custo;

    printf("Informe o comprimento do terreno: ");
    scanf("%lf", &c);

    printf("Informe a largura do terreno: ");
    scanf("%lf", &l);

    printf("Qual o preco por metro do terreno? ");
    scanf("%lf", &precoMetro);

    custo = (2 * (c + l)) * precoMetro;

    printf("Custo para cercar o terreno: R$%.2lf", custo);

    return 0;
}
