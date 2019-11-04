#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1, n2, n3, n4, soma;
	printf("\n\n\t\tdigite o numero: ");
	scanf("%f",&n1);
	printf("\n\n\t\tdigite o numero: ");
	scanf("%f",&n2);
	printf("\n\n\t\tdigite o numero: ");
	scanf("%f",&n3);
	printf("\n\n\t\tdigite o numero: ");
	scanf("%f",&n4);
	
	
	soma = n1+n2+n3+n4;
	
printf("\n\n\t\to resultado da soma %.2f +%.2f + %.2f+ %.2f + %.2f", n1,n2,n3,n4, soma);	

	
	system ("pause");
	return 0;
	
}
