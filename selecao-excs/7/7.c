#include <stdio.h>

int main() {

    int n1, n2, n3;

    printf("primeiro numero: ");
    scanf("%d", &n1);
    
    printf("segundo numero: ");
    scanf("%d", &n2);
    
    printf("terceiro numero: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3) {
        
        printf("maior numero: %d", n1);

    }   else if (n2 > n1 && n2 > n3) {

        printf("maior numero: %d", n2);

    }   else if (n3 > n2 && n3 > n1) {

        printf("maior numero: %d", n3);

    }   else if (n1 == n2 && n1 == n3) {

        printf("os numeros sao iguais.");

    }   else {

        printf("os numeros iguais sao os maiores.");

    }

    return 0;
}

