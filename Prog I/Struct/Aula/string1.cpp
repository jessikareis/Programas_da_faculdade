/* 
Prog: Receber um nome e imprimir as 4 primeiras letras do nome.
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atualização: 01/01/2017
*/
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
main()
{
	char nome[30];
	int b;
	printf ("Informe um nome: ");
	//scanf("%s",&nome);
	gets(nome);
	for(b=0;b<4;b++)
	{
		printf("\%c",nome[b]);
	}
	printf ("\n\n");
	system("PAUSE");
}
