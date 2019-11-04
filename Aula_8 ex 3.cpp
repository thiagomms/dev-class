#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

	void resultadofinal();
	void informacoes();
	void opcoes();

	float nota1, nota2, media, frequencia;
	int presenca, aulas;
	char nome[100];
	char sair[2];
	int x=0;
	
int main(void)
{
    while(x!=1)
    {
            informacoes(); 

            media=((float)nota1+nota2)/2; 

            frequencia=((float)presenca*100)/aulas;

            resultadofinal(); 

            opcoes();

            system("cls");
     }
}

void resultadofinal()
{
    printf("A MEDIA FINAL DO ALUNO E:  %.2f", media);
    printf("A FREQUENCIA DE %s FOI DE: %.2f%%", nome, frequencia);

    if(media>=6&&frequencia>=75)
    {
        printf("%s APROVADO", nome);
    }
    else
    {
        printf("O ALUNO %s REPROVADO", nome);
    }
}

void informacoes() 
{
    printf("ENTRE COM O NOME DO ALUNO:  ");
    fflush(stdin);
	gets(nome);

    printf("PRIMEIRA NOTA:  ");
    scanf("%f", &nota1);
    printf("SEGUNDA NOTA:  ");
    scanf("%f", &nota2);

    printf("QUANTIDADE DE AULAS MINISTRADAS:  ");
    scanf("%d", &aulas);

    printf("PRESENCA DO ALUNO:  ");
    scanf("%d", &presenca);
    Sleep(1000); 
    system("cls"); 
}

void opcoes()
{
    while(1) 
    {
        printf("- PARA CONTINUAR NO PROGRAMA PRECIONE ENTER.- PARA SAIR DO PROGRAMA PRECIONE ESC.");

        sair[0]=getch(); 
        system("cls"); /

        if(sair[0]==13) 
        {               
            break;
        }
        else if(sair[0]==27) 
        {                   
            int y;
            for(y=3; y>=1; y--)
            {
                printf("%d seg para sair...", y);
                Sleep(1000); 
            }
            x=1;
            system("cls");
            break;
        }
        else
            continue;
        }
    }
}

