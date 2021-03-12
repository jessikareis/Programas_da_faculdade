/*Programa:faça um programa para obter o nome e a altura dos 16 atletas de basquetes e exibir o nome e a altira do atleta mais baixo e mais alto
Autora: Jéssika Reis
Data de criação:15/09/2020.*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char nome[30], maior[30], menor[30];
	float alt[4][4], altmaior, altmenor, total;
	int n=0, x;
	
	for(x=0; x<4; x++)
	{
		for(int y=0; y<4; y++)
		{
			n++;
			setlocale(LC_ALL, "portuguese");
			printf("\nNome do %i° atleta: ", n);
			fflush(stdin);
			gets(nome);
			printf("altura: ");
			fflush(stdin);
			scanf("%f", &alt[x][y]);
			total=total+alt[x][y];
			if(x==0 && y==0) 
			{
				strcpy(maior,nome);
				strcpy(menor,nome);
				altmaior=alt[x][y];
				altmenor=alt[x][y];
			}
			else
			{
				if(alt[x][y]>altmaior)
				{
					altmaior=alt[x][y];
					strcpy(maior,nome);
				}
				if(alt[x][y]<altmenor)
				{
					altmenor=alt[x][y];
					strcpy(menor,nome);
				}
			}
		}
		
	}
	system("cls");
	printf("\nAtleta maior: %s %.2f", maior, altmaior);
	printf("\nAtleta menor: %s %.2f", menor, altmenor);
	printf("\nMédia das alturas: %.2f", total/n);
}
