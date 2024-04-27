#include <stdio.h>

int main () {

    char nome[30];
    char disciplina[30];
    float n1, n2, n3, med, provao, ed, medFinal;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite o nome da disciplina: ");
    scanf("%s", &disciplina);

    printf("Primeira nota: ");
    scanf("%f", &n1);

    printf("Segunda nota: ");
    scanf("%f", &n2);

    printf("Terceira nota: ");
    scanf("%f", &n3);

    med = (n1+n2+n3) / 3;

    printf("Nota do provao: ");
    scanf("%f", &provao);

    printf("Nota do estudo dirigido: ");
    scanf("%f", &ed);

    medFinal = (0.2*med) + (0.2*ed) + (0.6*provao);

    printf("\nNome do aluno: %s", nome);
    printf("\nDisciplina: %s", disciplina);
    printf("\nMedia final = %.1f", medFinal);

    return 0;
}
