/*Criador: Jéssika Reis de Mello.
Lista 1
Programa: 8.7 - Salario dos funcionarios, total dos salario em reais e em dolar.
Data de criação:14/09/2020.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	int x;
	float reais[20], dl[20];
		char mat[20][10];
	
	setlocale(LC_ALL, "portuguese");
	printf("****Digite 0 para sair e mostrar a soma****\n\n");
	while(true)
	{
	
		printf("Matrícula: ");
		fflush(stdin);
		gets(mat[x]);
		if(strcmp(mat[x],"0") == 0) break;
		else
		{
			printf("Salário: R$");
			fflush(stdin);
			scanf("%f", &reais[x]);
			dl[x]=reais[x]*3.54;
			printf("\n");
			x++;	
		}
	}
	
	system("cls");
	for(int z=0; z<x; z++)
	{
		printf("matrícula: %s\tR$%.2f\tU$%.2f\n", mat[z], reais[z], dl[z]);
	}
}
