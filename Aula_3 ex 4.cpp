#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	  float media[3], mediafim=0, totmedia=0;
      int nota=1;
	  int i=0;
	  

      while( i<3 )
      {
              printf("\nDigite a Nota %d: ", nota);
              scanf("%f", &media[i]);
              totmedia= totmedia+media[i];
              nota++;
			  i++;
      }
	
	mediafim = totmedia / 3;
	
	printf("\nA Media Das Notas eh: %.2f \n",mediafim);
	
	if(7<=mediafim){
		printf("\nO ALUNO ESTA APROVADO\n\n");
	}
	else{
		printf("\nO ALUNO Se FuNdEu\n\n");
	}
	system("pause"); 
	return 0;
}
