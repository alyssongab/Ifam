// FIBONACCI
#include <stdio.h>

int fib(int n) {
    if ((n == 1)||(n == 2))
        return 1; 
    else 
        return fib(n-2)+fib(n-1); 
}

int main(){
  int n;
    printf ("Digite o valor de n: ");
    scanf("%d",&n);
    printf ("Fibonacci de %d = %d", n, fib(n));
    return 0;
}