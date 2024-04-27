#include <stdio.h>

int main() {
    int data_original, dia, mes, ano;

    // Solicita ao usuário que insira a data no formato DDMMAA
    printf("Digite a data no formato DDMMAA (sem espaços): ");
    scanf("%d", &data_original);

    // Extrai os dígitos do dia, mês e ano
    dia = data_original / 10000;
    mes = (data_original % 10000) / 100;
    ano = data_original % 100;

    // Imprime a data no formato AAMMDD
    printf("Data no formato AAMMDD: %02d%02d%02d\n", ano, mes, dia);

    return 0;
}