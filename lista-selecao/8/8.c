#include <stdio.h>

int main () {

    int n1, n2;

        printf("primeiro numero: ");
        scanf("%d", &n1);
        printf("segundo numero: ");
        scanf("%d", &n2);

            if (n1 % n2 == 0 || n2 % n1 == 0) {
                printf ("sao multiplos!");
            
            }   else {
                printf ("nao sao multiplos");
            }
            
    return 0;
}