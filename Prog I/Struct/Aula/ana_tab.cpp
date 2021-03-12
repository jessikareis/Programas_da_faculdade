/*

Autor: Anselmo

Prog: Receber um nome do usário e imprimir n vezes de forma tabulada (n=tamanho)

Data de criação: 20/05/2020

Última atualização: 20/05/2020

*/
#include<stdio.h>
#include<string.h>
main()
{
	
	char nome[50];
	char pulo[5]="    ";
	char pulos[100]="";
	printf("Digite um nome: ");
	gets(nome);
	printf("tamanho da palavra=%d", strlen(nome));
	for (int i=0; i<strlen(nome); i++)
	{
		printf("\n%d)%s%s", i,pulos, nome);
		strcat(pulos,pulo);
	}
}
