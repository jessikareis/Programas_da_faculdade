/*

Autor: Anselmo

Prog: Receber um nome do usário e imprimir n vezes de forma tabulada (n=tamanho)

Data de criação: 20/05/2020

Última atualização: 20/05/2020

*/
#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <string.h>

main()

{
	int t, i;
	char nome[100];
	char tab[5]="----";
	char pula[100];
	printf("Digite seu nome: ");
	gets(nome);
	t=strlen(nome);
	for (i =0; i<t; i++)
	{
		printf("%s %s \n", pula,nome);
		strcat( pula, tab);	
	}	
}
