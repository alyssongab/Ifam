#include <stdio.h>

//  Entrada dos numeros
int entrada(){
   int numero;
 
  do{
     printf("Digite um numero: ");
     scanf("%d",&numero);
  }while(numero<0); 

  return numero;
}

// Fatorial dos numeros
int fatorial(int n){
   int i,fat=1;
   for(i=1;i<=n;i++)
     fat=fat*i; 

   return fat;
}

// Calculo da combinação
int calculo(int n, int k) {
	
	int c;
	c = fatorial(n) / (fatorial(k)*fatorial(n-k));
	
	return c;
}

// Função principal
int main(){
	
	int n, k;
	n = entrada();
	k = entrada();
	
	int c = calculo(n, k);
	
	printf("res: %i", c);
	
  return 0;
}