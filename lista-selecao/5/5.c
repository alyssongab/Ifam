#include <stdio.h>

int main() {

    int time1, time2;

    printf("gols do time 1: ");
    scanf("%d", &time1);

    printf("gols do time 2: ");
    scanf("%d", &time2);

    printf("-----------------\n");
    printf("Placar: %d - %d\n", time1, time2);
    printf("-----------------\n");

    if (time1 == time2) {
        printf("Empate!");
    }
        else if (time1 > time2) {
            printf("Vitoria do time 1!");
        }   
            else {
                printf("Vitoria do time 2!");
        }

    return 0;
}

/* Desenvolva um programa que recebe do usuário, o placar de um jogo de futebol (os gols de cada time)
e informa se o resultado foi um empate, se a vitória foi do primeiro time ou do segundo time. */
