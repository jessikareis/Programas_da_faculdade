/*Criador: Jéssika Reis de Mello.
Lista 1
Programa: 3- REPETIÇÃO
3.1) Escrever seu nome na tela 10 vezes. Um nome por linha.
Data de criação:31/08/2020.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	int x;
	char nome[50];
	
	printf("Informe seu nome: ");
	gets(nome);
	
	for(x=0;x<=10;x++)
	{
		printf("%x = %s\n",x+1, nome);
	}

	system("\pause");
}

