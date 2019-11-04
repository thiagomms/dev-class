#include <stdio.h>
#include <stdlib.h>

int main()
{
	system ("color 0e");
	float n1, n2,n3, media;
	
	printf("\n\n\t\t DIGITE UM NUMBER: ");
	scanf("%f", &n1);
	printf("\n\n\t\t DIGITE UM NUMBER: ");
	scanf("%f", &n2);
	printf("\n\n\t\t DIGITE UM NUMBER: ");
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	printf("\n\n\t\t MEDIA ARIT DE %.2f% -.2f% -.2f E %.2f.", n1,n2,n3,media);
	
	
	system ("pause");
	return 0;
}
