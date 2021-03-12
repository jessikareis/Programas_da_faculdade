/* 
Prog: Digite 4 nomes , calcule e mostre quantas letras cada um tem.
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atualização: 01/01/2017
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main()
{
	int x,tam;
	char nome[30];
	for (x=1; x <= 4; x++)
	{
		printf("Digite um nome: ");
		gets(nome);
		// na variavel tam ficará guardado quantas letras tem o nome
		tam = strlen(nome);
		printf("\nEsse nome tem %d\ letras.\n\n",tam);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
