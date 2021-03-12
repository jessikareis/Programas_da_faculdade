/* 
Prog: Solicitar um nome e mostrar o primeiro, o último, o quarto, do primeiro ao terceiro, do
primeiro ao ultimo. Mostrar a posição de cada letra no vetor.
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atualização: 01/01/2017
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char nome[30];
	int x,y=0,tam;
	printf("\n\n DIGITE UM NOME: ");
	gets(nome);
	tam=strlen(nome);
	printf("\n\t\tO nome digitado eh: %s ",nome);
	printf("\n\nNa posicao [%d] o primeiro caracter digitado eh: %c ",y, nome[0]);
	printf("\n\nNa posicao [%d] o ultimo caracter digitado eh: %c ",(y=tam-1),nome[tam-1]);
	printf("\n\nNa posicao [%d] esta o quarto caracter digitado eh: %c ",y=3, nome[3]);
	printf("\n\n Na posicao do primeiro ao terceiro caracter : ");
	printf("");
	for(x=0;x<=2;x++)
	{
		printf("\n[%d] %c ",x,nome[x]);
	}
	printf("\n");
	printf("\nNa posicao do primeiro ao ultimo caracter : ");
	for(x=0;x<=tam-1;x++)
		printf("\n[%d] %c ",x,nome[x]);
	printf("\n\n");
	system("pause");
	return(0);
}
