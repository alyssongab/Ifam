#include <stdio.h>

int main () {

    char pais1[30], pais2[30], pais3 [30];
    int ouro1, ouro2, ouro3; 
    int prata1, prata2, prata3; 
    int bronze1, bronze2, bronze3;
    int total1, total2, total3;

    // Ler o nome dos países

        printf("informe o primeiro pais: ");
        gets(pais1);
       
        printf("informe o segundo pais: ");
        gets(pais2);
        
        printf("informe o terceiro pais: ");
        gets(pais3);
    
    // Ler a quantidade de medalha de cada país
        
        printf ("\n----------quantidade de medalhas de ouro:----------\n");
            printf("%s: ", pais1);
            scanf("%d", &ouro1);

            printf("%s: ", pais2);
            scanf("%d", &ouro2);
            
            printf("%s: ", pais3);
            scanf("%d", &ouro3);

        printf ("\n----------quantidade de medalhas de prata:----------\n");
            printf("%s: ", pais1);
            scanf("%d", &prata1);

            printf("%s: ", pais2);
            scanf("%d", &prata2);

            printf("%s: ", pais3);
            scanf("%d", &prata3);

        printf ("\n----------quantidade de medalhas de bronze:----------\n");
            printf("%s: ", pais1);
            scanf("%d", &bronze1);

            printf("%s: ", pais2);
            scanf("%d", &bronze2);

            printf("%s: ", pais3);
            scanf("%d", &bronze3);

        total1 = (3*ouro1) + (2*prata1) + (bronze1);
        total2 = (3*ouro2) + (2*prata2) + (bronze2);
        total3 = (3*ouro3) + (2*prata3) + (bronze3);

            if (total1 > total2) {
                // printf("podio:\n(1)%s\n(2)%s\n(3)%s", pais1, pais2, pais3);
                    if (total2 > total3) {
                        printf("\n-----podio-----: \n(1)%s\n(2)%s\n(3)%s", pais1, pais2, pais3);
                    
                    }   else {
                        printf("\n-----podio-----: \n(1)%s\n(2)%s\n(3)%s", pais1, pais3, pais2);
                    }
            
            }   else if (total2 > total1) {

                    if (total1 > total3) {
                        printf("\n-----podio-----: \n(1)%s\n(2)%s\n(3)%s", pais2, pais1, pais3);
                    
                    }   else {
                        printf("\n-----podio-----: \n(1)%s\n(2)%s\n(3)%s", pais2, pais3, pais1);
                    }
            
            }   else if (total3 > total1) {

                    if (total1 > total2) {
                        printf("\n-----podio-----: \n(1)%s\n(2)%s\n(3)%s", pais3, pais1, pais2);
                    
                    }   else {
                        printf("\n-----podio-----: \n(1)%s\n(2)%s\n(3)%s", pais3, pais2, pais1);

                    }

            }

    return 0;
}
