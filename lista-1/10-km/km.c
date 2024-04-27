#include <stdio.h>

int main() {

    float km, vi, vf, percurso, litros, precoLitro, precoFinal;

    printf("quantidade de km que o carro faz com 1L de combustivel: ");
    scanf("%f", &km);

    printf("valor inicial do hodometro: ");
    scanf("%f", &vi);

    printf("valor final do hodometro: ");
    scanf("%f", &vf);
    
    printf("preco do litro, em reais: R$");
    scanf("%f", &precoLitro);

    percurso = vf - vi;

    litros = percurso / km;

    precoFinal = precoLitro * litros;

    printf("\nForam necessarios %.2f litros para realizar o percurso", litros);
    printf("\nValor a ser pago pelos litros gastos: R$%.2f", precoFinal);

    return 0;
}
