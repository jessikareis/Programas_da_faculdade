/*
5.8) Obtenha um nome e imprima quantas letras "A" tem este nome.
Data: 14/07/2020
Jéssika Reis de Mello*/

#include<stdio.h>
#include<string.h>
#include<locale.h>
#define quantidade 1
main()
{
	int x, y, tam, a=0;
	char nomes[quantidade][20];
	
	setlocale(LC_ALL, "portuguese");
	printf("******Digite o nome.******\n", quantidade);
	{
	printf("\nDigite o nome: ",x);
	gets(nomes[x]);
	}
	printf("\nO nome é: ");
		{
		printf("%s", nomes[x]);
		if(x==quantidade) printf(".");
		}
	{
		tam=strlen(nomes[x]);
		for(y=0;y<tam;y++)
		{
		if(nomes[x][y]=='a' || nomes[x][y]=='A') a++;
			
		}
	}
	printf("\nA quantidade de letras 'a': %i.", a);	
}		
