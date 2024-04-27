#include <stdio.h>

int main () {

    double salario, desc1, desc2, salario2, salarioliq;
    double inssfaixa2, inssfaixa3, inssfaixa4;

        printf("informe seu salario: ");
        scanf("%lf", &salario);
        
        // Para a tabela - INSS:

            inssfaixa2 = (0.09*(2666.68 - 1412.01));
            inssfaixa3 = (0.12*(4000.03 - 2666.69));
            inssfaixa4 = (0.14*(7786.02 - 4000.04));

            if (salario <= 1412) {                                      // faixa 1
                desc1 = 0.075 * salario;

            }   else if (salario >= 1412.01 && salario <= 2666.68) {    // faixa 2
                desc1 = (0.075 * 1412) + (0.09*(salario - 1412.01));
            
            }   else if (salario >= 2666.69 && salario <= 4000.03) {    // faixa 3
                desc1 = (0.075 * 1412) + inssfaixa2 + (0.12*(salario - 2666.69));

            }   else if (salario >= 4000.04 && salario <= 7786.02) {    // faixa 4
                desc1 = (0.075 * 1412) + inssfaixa2 + inssfaixa3 + (0.14*(salario - 4000.04));
            
            }   else if (salario > 7786.02) {
                desc1 = 908.86;
            
            }

        // Novo salario com o devido desconto do INSS:    
            
            salario2 = salario - desc1;

        // Para a tabela - Imposto de renda: Utiliza-se o salário com o desconto do INSS já aplicado

            if (salario2 >= 2259.21 && salario2 <= 2828.65) {           // dedução = 169.44
                desc2 = 0.075 * salario2;
                desc2 = desc2 - 169.44;
           
            }   else if (salario2 >= 2828.66 && salario2 <= 3751.05) {  //dedução = 381.44
                desc2 = 0.15 * salario2;
                desc2 = desc2 - 381.44;
            
            }   else if (salario2 >= 3751.06 && salario2 <= 4664.68) {  // dedução = 662.77
                desc2 = 0.225 * salario2;
                desc2 = desc2 - 662.77;

            }   else if (salario2 > 4664.68) {                          // dedução = 896
                desc2 = 0.275 * salario2;
                desc2 = desc2 - 896;
            
            }   else {
                desc2 = 0.00;
            }

            salarioliq = salario2 - desc2;
            
            printf("-----------------------------------");
            printf("\nSalario fornecido: R$%.2lf", salario);
            printf("\nDescontos de INSS: -R$%.2f", desc1);
            printf("\nDescontos de IRPF: -R$%.2f", desc2);
            printf("\nSalario com descontos: R$%.2f", salarioliq);
            printf("\n-----------------------------------");

    return 0;
}