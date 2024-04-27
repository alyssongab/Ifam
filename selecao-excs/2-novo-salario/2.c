#include <stdio.h>
#include <locale.h>


int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	double salario, salarioNovo, diferenca;
	int codigo;	
	
	printf("informe seu salario: ");
	scanf("%lf", &salario);
	
	printf("codigo do cargo: ");
	scanf("%d", &codigo);
	
	/* aumentos:
	 101 - gerente - 10%
	 102 - engenheiro - 20%
	 103 - tecnico - 30%
	 default - 40%
	*/
	
	switch (codigo) {
	
	case 101: 
	salarioNovo = (0.1*salario) + salario;
	diferenca = salarioNovo - salario;
	printf("Gerente\n");
	break;
			 
	case 102:
	salarioNovo = (0.2*salario) + salario;
	diferenca = salarioNovo - salario;	
	printf("Engenheiro\n");
	break;
	
	case 103:
	salarioNovo = (0.3*salario) + salario;
	diferenca = salarioNovo - salario;
	printf("Técnico\n");
	break;
	
	default: 
	salarioNovo = (0.4*salario) + salario;
	diferenca = salarioNovo - salario;
	printf("Cargo não listado\n");
	break;
	
	}
	
	printf("\nSalario antigo: %.2lf", salario);
	printf("\nSalario novo: %.2lf", salarioNovo);
	printf("\nDiferença: %.2lf", diferenca);
	
	return 0;
}
