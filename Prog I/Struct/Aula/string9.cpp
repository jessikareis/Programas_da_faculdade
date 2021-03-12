/* 
Prog: Receber um nome no teclado e imprimir quantas letras "A" tem o nome.
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atualização: 01/01/2017
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
main()
{
	char nome[30];
	int x,t, a=0;
	printf("\n\t INFORME UM NOME : ");
	//gets(nome);
	scanf("%s",&nome);
	t=strlen(nome);
	for (x=0; x < t; x++)
	{
		if (nome[x] == 'a' || nome[x] == 'A')
			a=a+1;
	}
	printf("\n O nome %s ",(nome));
	printf("tem %d letra a.",a);
	printf("\n\n");
	system("pause");
	return(0);
}
