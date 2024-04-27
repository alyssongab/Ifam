#include <stdio.h>

int main () {

    double n1, n2, res;
    int operacao;

        printf("---------- CALCULADORA----------\n");
        printf("insira um numero: ");
        scanf("%lf", &n1);
        printf("\ninsira outro numero: ");
        scanf("%lf", &n2);

        printf("escolha uma operacao:\n (1) adicao \n (2) subtracao \n (3) multiplicacao \n (4) divisao \n");
        scanf("%d", &operacao);

            switch (operacao) {

                case 1:
                    printf("voce escolheu a operacao de adicao! \n");
                    res = n1 + n2;
                    printf("%.2lf + %.2lf = %.2lf", n1, n2, res);
                     break;
                  
                case 2:
                    printf("voce escolheu a operacao de subtracao! \n");
                    res = n1 - n2;
                    printf("%.2lf - %.2lf = %.2lf", n1, n2, res);
                     break;

                case 3:
                    printf("voce escolheu a operacao de multiplicacao! \n");
                    res = n1 * n2;
                    printf("%.2lf x %.2lf = %.2lf", n1, n2, res);
                    break;

                case 4:
                    printf("voce escolheu a operacao de divisao! \n");
                    res = n1 / n2;
                    printf("%.2lf / %.2lf = %.2lf", n1, n2, res);
                     break;

                default:
                    printf("erro!");
                    break;

            }

    return 0;
}

/* Faça um programa que simule uma calculadora simples. O usuário deve inserir dois números e escolher
a operação a ser realizada (adição, subtração, multiplicação ou divisão). */