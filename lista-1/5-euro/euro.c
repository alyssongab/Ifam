#include <stdio.h>

int main() {

    double diaria, dias, cotacao, valorTotal;
    dias = 10;

    printf("Valor da diaria, em reais: ");
    scanf("%lf", &diaria);

    printf("Valor do euro: ");
    scanf("%lf", &cotacao);

    valorTotal = (diaria * dias) / cotacao;

    printf("Valor total a ser levado, em euros: %.2lf", valorTotal);    

    return 0;
}
