#include <stdio.h>
#include <math.h>

int main () {

    float w, h, imc;

        printf("informe sua altura: ");
        scanf("%f", &h);

        printf("informe seu peso: ");
        scanf("%f", &w);

        imc = w / pow(h,2);
        
            if (imc < 18.5) {
                printf("abaixo do peso");
            
            }   else if (imc >= 18.5 && imc < 25) {
                printf("peso normal");

            }   else if (imc >= 25 && imc <= 30) {
                printf("acima do peso");

            }   else if (imc > 30 ) {
                printf("obeso");
            }

    return 0;
}