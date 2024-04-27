#include <stdio.h>

int main () {

    char nome[50];
    int idd;

        printf("informe seu nome: ");
        gets(nome);
        
        printf("informe sua idade: ");
        scanf("%d", &idd);

            if (idd >= 0 && idd <= 10) {
                printf("%s voce pagara o plano de R$ 50", nome);
            
            }   else if (idd > 10 && idd <= 29) {
                printf("%s voce pagara o plano de R$ 300", nome);
            
            }   else if (idd > 29 && idd <= 45) {
                printf("%s voce pagara o plano de R$ 500", nome);

            }   else if (idd > 45 && idd <= 59) {
                printf("%s voce pagara o plano de R$ 1250,00", nome);

            }   else if (idd > 59 && idd <= 65) {
                printf("%s voce pagara o plano de R$1550,00", nome);

            }   else if (idd > 65) {
                printf("%s voce pagara o plano de R$ 2040,00", nome);
            }

    return 0;
}