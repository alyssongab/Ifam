#include <stdio.h>

int fat (int n){
 if (n==0)
    return 1;
 else
    return n*fat(n-1);
}

int main(){
  int n;
    printf ("Digite o valor de n: ");
    scanf("%d",&n);
    printf ("Fatorial de %d = %d", n, fat(n));
    return 0;
}