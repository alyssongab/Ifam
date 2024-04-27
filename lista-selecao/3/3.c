#include <stdio.h>

int main () {

    float h1, h2, h3;

        printf("altura da arvore 1: ");
        scanf("%f", &h1);
        printf("\naltura da arvore 2: ");
        scanf("%f", &h2);
        printf("\naltura da arvore 3: ");
        scanf("%f", &h3);

            if (h1 > h2 && h2 > h3) {
                printf("maior arvore: A1");
                printf("\nmenor arvore: A3");
           
            }   else if (h1 > h3 && h3 > h2) {
                printf("maior arvore: A1");
                printf("\nmenor arvore: A2");
            
            }   else if (h2 > h1 && h1 > h3) {
                printf("maior arvore: A2");
                printf("\nmenor arvore: A3");
            
            }   else if (h2 > h3 && h3 > h1) {
                printf("maior arvore: A2");
                printf("\nmenor arvore: A1");
            
            }   else if (h3 > h2 && h2 > h1) {
                printf("maior arvore: A3");
                printf("\nmenor arvore: A1");
            
            }   else if (h3 > h1 && h1 > h2) {
                printf("maior arvore: A3");
                printf("\nmenor arvore: A2");
            
            }   else if (h1 == h2 && h2 == h3){
                printf("todas tem a mesma altura!");
            
            }   else {
                printf("duas arvores tem a mesma altura!");

            }


    return 0;
}

/* Existem três árvores em frente a casa de João, A1, A2 e A3, elas possuem as seguintes alturas,
respectivamente, H1, H2 e H3. Faça um programa que mostre a maior e menor árvore. */