#include <stdio.h>

int main () {

    int num;

        printf("numero: ");
        scanf("%d", &num);

            if (num > 1) {
                
                if (num == 2 || num == 3 || num == 7) {
                    printf ("numero primo!");
                
                }   else if (num % num == 0 && num % 1 == 0) {
                        
                        if (num % 2 == 0 || num % 3 == 0 || num % 7 == 0) {
                            printf ("nao e numero primo!");
                        
                        }   else {
                            printf ("numero primo!");
                        }   
            
                }   
           
            }   else {
                printf("nao e numero primo!");
            }

    return 0;
}