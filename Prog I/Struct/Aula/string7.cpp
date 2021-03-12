/* 
Prog: Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres.
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atualização: 01/01/2017
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
main()
{
	int x,tam;
	char nome[30];
	printf("Digite um nome: ");
	gets(nome);
	tam = strlen(nome);
	for (x=1; x <= tam; x++)
		printf("\n%s",nome);
	printf("\n\n");
	system("pause");
}
