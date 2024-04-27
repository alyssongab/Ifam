#include <stdio.h>


int main() {

    int idd;

        printf("informe sua idade: ");
        scanf("%d", &idd);

            if (idd < 0) {
                printf("insira uma idade valida!");
            
            }   else if (idd < 10) {
                printf("Livre para todas as idades.");

            }   else if (idd >= 10 && idd < 12) {
                printf("recomendado para maiores de 10 anos.");
            
            }   else if (idd >= 12 && idd < 14) {
                printf("recomendado para maiores de 12 anos.");

            }   else if (idd >= 14 && idd < 16) {
                printf("recomendado para maiores de 14 anos.");

            }   else if (idd >= 16 && idd < 18) {
                printf("recomendado para maiores de 16 anos.");

            }   else if (idd >= 18) {
                printf("recomendado para maiores de 18 anos.");

            }

    return 0;
}