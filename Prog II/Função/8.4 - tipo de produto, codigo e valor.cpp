/*Criador: Jéssika Reis de Mello.
Lista 1
Programa: programa para obter codigo, tipo e valor, de 130 equipamentos.
Data de criação:14/09/2020.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

main()
{	
	char cod[130][40], tipo[130][40], cod2[40];
	int y;
	float prc[130], mprc=0;
	
	for(int x=0; x<130; x++)
	{
		setlocale(LC_ALL,"portuguese");
		printf("Informe o código do produto: ");
		fflush(stdin);
		gets(cod[x]);
		printf("\nInforme o tipo do produto? (submarinos, terrestres ou hibridos): ");
		fflush(stdin);
		gets(tipo[x]);
		if(strcmp(tipo[x],"terrestres")==0 ) y++;
		printf("\nDigite o preço do produto? R$");
		scanf("%f", &prc[x]);
		if(prc[x]>mprc) 
		{
			mprc=prc[x];
			strcpy(cod2,cod[x]);
		}	
	}
	printf("\n\nCódigo e valor do equipamento mais caro:");
	printf("\nCod: %s, R$%.2f", cod2, mprc);
	printf("\n\nQuantidades de 'terrestres': %i\n", y);
}

