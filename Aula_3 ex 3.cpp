#include <stdio.h>
#include <stdlib.h>

int main()
{	
      float media[3], peso[3], mediafim=0, totpeso=0, totmedia=0;
      int nota=1;
	  int i=0;
	  
      while( i<3 )
      {
              printf("\nDigite a Nota %d: ", nota);
              scanf("%f", &media[i]);
              printf("\nDigite o peso da Nota %d: ", nota);
              scanf("%f", &peso[i]);
              totmedia= totmedia+(media[i]*peso[i]);
              totpeso= totpeso+peso[i];
              nota++;
			  i++;
      }
      
      mediafim= totmedia/totpeso;
      printf("\nA media pondera eh:%.2f \n\n", mediafim);

system("pause");
return 0;
}
