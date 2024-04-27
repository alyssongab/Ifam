#include <stdio.h>

int main() {

    double duracao;
    double dias, horas, minutos, segundos;

    printf("duracao do evento, em segundos: ");
    scanf("%lf", &duracao);

    dias = duracao / 86400;
    horas = duracao / 3600;
    minutos = duracao / 60;
    segundos = duracao;

    printf("\nduracao em dias: %.1lf dias", dias);
    printf("\nduracao em horas: %.1lfh", horas);
    printf("\nduracao em minutos: %.0lfmin", minutos);
    printf("\nduracao em segundos: %.0lfs", segundos);

    return 0;
}
