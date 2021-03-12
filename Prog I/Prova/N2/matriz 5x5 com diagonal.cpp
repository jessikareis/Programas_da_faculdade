/*Criadora: Jéssika Reis de Mello
Programa:  Faça um programa que utilize um Menu de opções com comando switch / case,  que possibilite ao usuário utilizar as opções abaixo relacionadas (itens de menu).
Só sair do programa por determinação do usuário; Assim que iniciar o programa deve criar uma matriz 5X5 de inteiros e preencher com a função rand() com valores entre 0 
e 100 e imprimi-la.
Opções:
a)Imprimir o maior elemento da matriz
b)Imprimir o menor elemento da matriz
c)Imprimir a matriz a diagonal principal (mantendo a formatação)
d)Imprimir apenas os números pares (mantendo a formatação).
e)Fim
Data de criação:15/07/2020.
Horário: */

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
		printf("\n(c) - Imprimir a diagonal principal (mantendo a formatação)");
		printf("\n(d) - Imprimir apenas os números pares");
		printf("\n(e) - Fim");
		scanf("%c", &y);
		switch(y)
		{
			case 'a':
				printf("\nO maior elemento da matriz é: %d", maior);
				break;
			case 'b': 
				printf("\nO menor elemento da matriz é %d", menor);	
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
					printf("\nNúmeros pares: \n");
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

