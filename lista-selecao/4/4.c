#include <stdio.h>

int main() {

    float tmanha, ttarde, tnoite;

        printf("temperatura de manha: ");
        scanf("%f", &tmanha);
        printf("temperatura de tarde: ");
        scanf("%f", &ttarde);
        printf("temperatura de noite: ");
        scanf("%f", &tnoite);

            if (tmanha > ttarde && ttarde > tnoite) {
                printf("temperaturas em ordem crescente: \n");
                printf("%.1f \n%.1f \n%.1f", tnoite, ttarde, tmanha);
            
            }   else if (tmanha > tnoite && tnoite > ttarde) {
                printf("temperaturas em ordem crescente: \n");
                printf("%.1f \n%.1f \n%.1f", ttarde, tnoite, tmanha);
            
            }   else if (ttarde > tmanha && tmanha > tnoite) {
                printf("temperaturas em ordem crescente: \n");
                printf("%.1f \n%.1f \n%.1f", tnoite, tmanha, ttarde);
            
            }   else if (ttarde > tnoite && tnoite > tmanha) {
                printf("temperaturas em ordem crescente: \n");
                printf("%.1f \n%.1f \n%.1f", tmanha, tnoite, ttarde);
            
            }   else if (tnoite > tmanha && tmanha > ttarde) {
                printf("temperaturas em ordem crescente: \n");
                printf("%.1f \n%.1f \n%.1f", ttarde, tmanha, tnoite);
            
            }   else if (tnoite > ttarde && ttarde > tmanha) {
                printf("temperaturas em ordem crescente: \n");
                printf("%.1f \n%.1f \n%.1f", tmanha, ttarde, tnoite);
            }   

    return 0;
}