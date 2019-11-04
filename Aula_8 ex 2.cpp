#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n1;
	
	printf("\nDigite sua idade: ");
	scanf("%d",&n1);
	
	if(n1>=70){
		printf("\nVOCE E VELHO !\n\n");
	}
	else if(n1>=21){
		printf("\voce E ADULTO !\n\n");
	}
	else{
		printf("\nvoce e jovem !\n\n");
	}
	system("pause");
	return 0;
}
