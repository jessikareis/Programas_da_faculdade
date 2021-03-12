/*Criadora: J�ssika Reis de Mello
Programa:  Fa�a um programa que utilize um Menu de op��es com comando switch / case,  que possibilite ao usu�rio utilizar as op��es abaixo relacionadas (itens de menu).
S� sair do programa por determina��o do usu�rio; Assim que iniciar o programa deve criar uma matriz 5X5 de inteiros e preencher com a fun��o rand() com valores entre 0 
e 100 e imprimi-la.
Op��es:
a)Imprimir o maior elemento par da matriz
b)Imprimir o menor elemento impar da matriz
c)Imprimir a matriz sem a diagonal principal (mantendo a formata��o)
d)Imprimir apenas os n�meros pares (mantendo a formata��o).
e)Fim
Data de cria��o:15/07/2020.
Hor�rio:13:32 */

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(NULL));
	
	int linha, coluna, maior=-1, menor=101;
	int vet[5][5];
	char y;
	
	system("cls");
	setlocale(LC_ALL, "portuguese");
	printf("___________________________________\n");
	printf("\t\tMatriz:\n");
	for(linha=0;linha<5;linha++)
	{
		for(coluna=0;coluna<5;coluna++)
		{
			vet[linha][coluna]=rand()%100;
			printf("%d\t", vet[linha][coluna]);
			if(vet[linha][coluna]%2==0)
			{
			if(maior<vet[linha][coluna]) maior=vet[linha][coluna];
			
			}
			else 
			{
			if(menor>vet[linha][coluna]) menor=vet[linha][coluna];
			}
			
		}
		printf("\n");
	}
	while(1==1)
	{
		printf("\n\n\t\t********Menu********");
		printf("\n\n(a) - Imprimir o maior elemento par da matriz");
		printf("\n(b) - Imprimir o menor elemento �mpar da matriz");
		printf("\n(c) - Imprimir a matriz sem a diagonal principal (mantendo a formata��o)");
		printf("\n(d) - Imprimir apenas os n�meros pares");
		printf("\n(e) - Fim\n");
		fflush(stdin);
		scanf("%c", &y);
		switch(y)
		{
			case 'a':
				printf("\n\nO maior elemento par da matriz �: %d\n\n", maior);
				break;
			case 'b':
				printf("\n\nO Menor �mpar �: %d \n\n", menor);
				break;
			case 'c':
				printf("\nImprimir a matriz sem a diagonal principal (mantendo a formata��o)\n\n");
					for(linha=0;linha<5;linha++)
					{
						for(coluna=0;coluna<5;coluna++)
						{			
							if(coluna==linha) printf("\t");
							else printf("%d\t", vet[linha][coluna]);
							
						}
						printf("\n");
					}
				break;	
			case 'd': 
				printf("\n\nImprimir apenas os n�meros pares\n");
					for(linha=0;linha<5;linha++)
					{
						for(coluna=0;coluna<5;coluna++)
						{			
							if(vet[linha][coluna]%2 == 0 )  printf("%d\t", vet[linha][coluna]);
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
