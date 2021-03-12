/* 
Prog: Digitar um nome e solicitar que seja mostrado em maiúsculo na tela.
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atualização: 01/01/2017
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
main()
{
	int x,tam;
	int M;
	char nome[30];
	printf("\nDigite um nome: ");
	gets(nome);
	tam = strlen(nome);
	for(x=0; x<tam; x++)
	{
		printf("%c\a",toupper(nome[x]));
		for(M=1; M<=10000000; M++);
	}
	printf("\n");
	system("pause");
	return(0);
}
