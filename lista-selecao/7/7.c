#include <stdio.h>

int main() {

    int ano;

    printf("insira um ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0) {
        printf("ano bissexto!");
    }   
            else if (ano % 4 == 0 && !(ano % 100 == 0)) {
            printf("ano bissexto!");
    }           
                else {
                    printf("nao e ano bissexto!");
    }

    return 0;
}

/*     São bissextos todos os anos múltiplos de 400, p.ex.: 1600, 2000, 2400, 2800...
    São bissextos todos os múltiplos de 4, exceto se for múltiplo de 100 (ou seja, o último ano de cada século) 
    mas não de 400, p.ex.: 1996, 2000, 2004, 2008, 2012, 2016, 2020, 2024 */