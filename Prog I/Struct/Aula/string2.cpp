/* 
Prog: Receber um nome e imprimir as letras na posição impar
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atulaização: 01/01/2017
*/
#include <string.h>
#include <stdlib.h>
//#include <conio.h>
#include <stdio.h>
main()
{
	int pp=1,tam,x;
	char nome[100];
	printf ("Informe um nome:");
	gets(nome);
	tam=strlen(nome);
	printf("\nAs letras na posicao impar sao: ",x);
	while(pp<tam)
	{
		printf(" %c ",nome[pp]);
		pp=pp+2;
	}
	printf ("\n");
	printf("\n\tNome digitado: %s\t",nome);
	printf ("\n\n");
	system("PAUSE");
}
