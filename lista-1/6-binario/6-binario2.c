#include <stdio.h>
#include <math.h>

int  main () {

    int numeroBin, bin1, bin2, bin3, bin4, dec;

    printf("Digite um numero binario de 4 digitos: ");
    scanf("%d", &numeroBin);

    // Pegar a casa decimal de cada um dos números inseridos

    bin1 = numeroBin / 1000;

    bin2 = (numeroBin % 1000) / 100;

    bin3 = (numeroBin % 100) / 10;

    bin4 = numeroBin % 10;

    // Conversão para numero decimal

    bin4 = (pow(2,0) * bin4);

    bin3 = (pow(2,1) * bin3);

    bin2 = (pow(2,2) * bin2);

    bin1 = (pow(2,3) * bin1);

    dec = bin4 + bin3 + bin2 + bin1;

    printf("\nSua forma decimal: %d", dec);

    return 0;
}


