#include <stdio.h>

int main () {

    float i;
 
        printf("informe o indice de poluicao: ");
        scanf("%f", &i);

            if (i >= 0.05 && i <= 0.25) {
                printf("indice de poluicao aceitavel!");
            }   
                else if (i >= 0.3 && i < 0.4) {
                printf("Grupo 1: atividades suspensas!");                   
            }
                else if (i >= 0.4 && i < 0.5) {
                printf("Grupo 1 e 2: atividades suspensas");                    
            }   
                else if (i >= 0.5) {
                printf("Todos os grupos devem paralisar as atividades!");        
            }

    return 0;
}