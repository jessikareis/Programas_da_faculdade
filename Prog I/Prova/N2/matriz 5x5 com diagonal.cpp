/*Criadora: J�ssika Reis de Mello
Programa:  Fa�a um programa que utilize um Menu de op��es com comando switch / case,  que possibilite ao usu�rio utilizar as op��es abaixo relacionadas (itens de menu).
S� sair do programa por determina��o do usu�rio; Assim que iniciar o programa deve criar uma matriz 5X5 de inteiros e preencher com a fun��o rand() com valores entre 0 
e 100 e imprimi-la.
Op��es:
a)Imprimir o maior elemento da matriz
b)Imprimir o menor elemento da matriz
c)Imprimir a matriz a diagonal principal (mantendo a formata��o)
d)Imprimir apenas os n�meros pares (mantendo a formata��o).
e)Fim
Data de cria��o:15/07/2020.
Hor�rio: */

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	
	int linha, coluna, maior=0, menor=0;
	int vet[5][5];
	char y;
	
	printf("Matriz:\n");
	for(linha=0;linha<5;linha++)
	{
		for(coluna=0;coluna<5;coluna++)
		{
			vet[linha][coluna]=rand()%100;
			printf("%d\t", vet[linha][coluna]);
			if(linha == 0) 
			{
				maior = vet[linha][coluna];
				menor = vet[linha][coluna];
			}
			if(maior<vet[linha][coluna]) maior=vet[linha][coluna];
			if(menor>vet[linha][coluna]) menor=vet[linha][coluna];
		}
		printf("\n");
	}
	while(true)
	{
		printf("\n\n\t\tMENU");
		printf("\n\n(a) - Imprimir o maior elemento da matriz");
		printf("\n(b) - Imprimir o menor elemento da matriz");
		printf("\n(c) - Imprimir a diagonal principal (mantendo a formata��o)");
		printf("\n(d) - Imprimir apenas os n�meros pares");
		printf("\n(e) - Fim");
		scanf("%c", &y);
		switch(y)
		{
			case 'a':
				printf("\nO maior elemento da matriz �: %d", maior);
				break;
			case 'b': 
				printf("\nO menor elemento da matriz � %d", menor);	
				break;
			case 'c':
					printf("\nDiagonal principal\n");
					for(linha=0;linha<5;linha++)
					{
						for(coluna=0;coluna<5;coluna++)
						{
							if(coluna==linha)	printf("%d\t", vet[linha][coluna]);
							else printf("\t");
					
						}
						printf("\n");
					}	
					break;
			case 'd':
					printf("\nN�meros pares: \n");
					for(linha=0;linha<5;linha++)
					{
						for(coluna=0;coluna<5;coluna++)
						{
							if(vet[linha][coluna]%2==0)	printf("%d\t", vet[linha][coluna]);
							else printf("\t");
					
						}
						printf("\n");
					}
					break;
			case 'e':
					return 0;				
		}
		
		
	}
}

