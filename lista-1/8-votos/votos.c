#include <stdio.h>

int main () {

    int votosCandidato1, votosCandidato2, votosCandidato3;
    int votosBranco, votosNulo, totalVotos;
    float prcCandidato1, prcCandidato2, prcCandidato3, prcBranco, prcNulo;

    printf("Quantidade de votos validos para o candidato 1: ");
    scanf("%d", &votosCandidato1);

    printf("\nQuantidade de votos validos para o candidato 2: ");
    scanf("%d", &votosCandidato2);

    printf("\nQuantidade de votos validos para o candidato 3: ");
    scanf("%d", &votosCandidato3);

    // Votos em branco e nulo não são considerados.

    printf("\nQuantidade de votos nulos: ");
    scanf("%d", &votosNulo);

    printf("\nQuantidade de votos em branco: ");
    scanf("%d", &votosBranco);

    totalVotos =  votosCandidato1 + votosCandidato2 + votosCandidato3 + votosNulo + votosBranco;

    prcCandidato1 =  ((float) votosCandidato1 / totalVotos) * 100;
    prcCandidato2 =  ((float) votosCandidato2 / totalVotos) * 100;
    prcCandidato3 =  ((float) votosCandidato3 / totalVotos) * 100;

    prcNulo = ((float) votosNulo / totalVotos) * 100;
     prcBranco = ((float) votosBranco / totalVotos) * 100;

    // Saída dos dados

    printf("\nNumero total de eleitores: %d", totalVotos);

    printf("\nPorcentagem de votos do candidato 1: %.2f%%", prcCandidato1);
    printf("\nPorcentagem de votos do candidato 2: %.2f%%", prcCandidato2);
    printf("\nPorcentagem de votos do candidato 3: %.2f%%", prcCandidato3);

    printf("\nPorcentagem de votos nulos: %.2f%%", prcNulo);
    printf("\nPorcentagem de votos em branco: %.2f%%", prcBranco);

    return 0;
}


