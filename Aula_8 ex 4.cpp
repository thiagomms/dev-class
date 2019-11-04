#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n1;
	
	printf("\nDigite um numero: ");
	scanf("%d",&n1);
	
	if(n1>10){
		printf("\nO NUMERO E MAIOR QUE 10!\n\n");
	}
	else if(n1<10){
		printf("\nO NUMERO E MENOR QUE 10!\n\n");
	}
	else if(n1==10){
		printf("\nVOCE ACERTOU!\n\n");
	}
	
	system("pause");
	return 0;
}
