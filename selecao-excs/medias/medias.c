#include <stdio.h>
#include <math.h>

int main () {

    float n1, n2, n3, ma, mp, mg;
    int media;

    printf("nota 1: ");
    scanf("%f", &n1);

    printf("nota 2: ");
    scanf("%f", &n2);

    printf("nota 3: ");
    scanf("%f", &n3);

    printf("Escolha qual media sera utilizada:\n");
    printf("(1) Aritmetica\n");
    printf("(2) Ponderada (pesos 3, 3, 4)\n");
    printf("(3) Geometrica\n");
    scanf("%d", &media);

    switch (media) {

        case 1:
            ma = (n1+n2+n3) / 3;
            printf("media aritmetica: %.1f", ma);
            break;

        case 2: 
            mp = (n1*3 + n2*3 + n3*4) / 10;
            printf("media ponderada: %.1f", mp);
            break;

        case 3:
            mg = cbrt((n1*n2*n3));
            printf("media geometrica: %.1f", mg);
            break;

        default:
            printf("erro!");
            break;    
    }

    return 0;
}

