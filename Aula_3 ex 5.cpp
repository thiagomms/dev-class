#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float salario, vendas, salariofinal, comissao;
	
	printf("Informe o salario fixo: ");
	scanf("%f", & salario);
	
	printf("Informe o total de vendas: ");
	scanf("%f", & vendas);
	

	comissao = vendas + (vendas * 0.4); 
	salariofinal = salario + comissao;
	
	printf("\nComissao: [%0.2f]\n", comissao);
	
	printf("Salario final: [%0.2f]\n", salariofinal);

	system("pause"); 
	return 0;
}
