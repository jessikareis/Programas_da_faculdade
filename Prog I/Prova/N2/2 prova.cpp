/*Criadora: Jéssika Reis de Mello
Programa:  Faça um programa que utilize um Menu de opções com comando switch / case,  que possibilite ao usuário utilizar as opções abaixo relacionadas (itens de menu).
Só sair do programa por determinação do usuário; Assim que iniciar o programa deve criar uma matriz 5X5 de inteiros e preencher com a função rand() com valores entre 0 
e 100 e imprimi-la.
Opções:
a)Imprimir o maior elemento par da matriz
b)Imprimir o menor elemento impar da matriz
c)Imprimir a matriz sem a diagonal principal (mantendo a formatação)
d)Imprimir apenas os números pares (mantendo a formatação).
e)Fim
Data de criação:15/07/2020.
Horário:13:32 */

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
		printf("\n(b) - Imprimir o menor elemento ímpar da matriz");
		printf("\n(c) - Imprimir a matriz sem a diagonal principal (mantendo a formatação)");
		printf("\n(d) - Imprimir apenas os números pares");
		printf("\n(e) - Fim\n");
		fflush(stdin);
		scanf("%c", &y);
		switch(y)
		{
			case 'a':
				printf("\n\nO maior elemento par da matriz é: %d\n\n", maior);
				break;
			case 'b':
				printf("\n\nO Menor ímpar é: %d \n\n", menor);
				break;
			case 'c':
				printf("\nImprimir a matriz sem a diagonal principal (mantendo a formatação)\n\n");
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
				printf("\n\nImprimir apenas os números pares\n");
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
