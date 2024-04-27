#include <stdio.h>

int main () {


    int data;
    int d1, d2, d3, d4, d5, d6, d7, d8;

    printf("Insira a data, no formato DDMMAA, como numero inteiro: \n");
    scanf("%d", &data);

    d1 = data / 10000000;
    d2 = (data % 10000000) / 1000000;
    d3 = (data % 1000000) / 100000;
    d4 = (data % 100000) / 10000;
    d5 = (data % 10000) / 1000;
    d6 = (data % 1000) / 100;
    d7 = (data % 100) / 10;
    d8 = data % 10;

    printf("%d%d%d%d%d%d%d%d", d8,d7,d6,d5,d4,d3,d2,d1); 
 
    return 0;
}

