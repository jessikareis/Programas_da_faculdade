/* 
Prog: Obtenha um nome e imprima quantas letras tem.
Autor: Jéssika Reis de Mello
Data de Criação: 14/09/2020
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
