#include <stdio.h>

int main () {

    double preco, precofinal;
    int codigo;

    printf("preco do produto na etiqueta: ");
    scanf("%lf", &preco);

    printf("Qual a condicao de pagamento?");
    printf("\n(1) \n(2) \n(3) \n(4)\n");
    scanf("%d", &codigo);

    switch (codigo) {

        case 1:
            printf("voce escolheu o pagamento a vista ou cheque, recebe 10%% de desconto!");
            precofinal = preco - (0.1*preco);
            break; 

        case 2:
            printf("voce escolheu o pagamento a vista no cartao de credito, recebe 5%% de desconto!");
            precofinal = preco - (0.05*preco);
            break;

        case 3:
            printf("voce escolheu o pagamento em duas vezes, preco normal da etiqueta sem juros!");
            precofinal = preco;
            break;

        case 4:
            printf("voce escolheu o pagamento em 3 vezes, preco normal da etiqueta mais juros de 10%%!");
            precofinal = (0.1*preco) + preco;
            break;

        default:
            printf("voce nao escolheu nenhuma condicao de pagamento valida!");
            break;
    
    }

    printf("\nvalor a pagar: R$ %.2lf", precofinal);

    return 0;
}
