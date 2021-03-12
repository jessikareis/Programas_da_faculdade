/*
Programa: Criar um algoritmo que leia os elementos de uma matriz previamente criada com
valores inteiros aleatorios de 0 a 100  com dimensão de de 4 x 4 e:
1)Imprimir a matriz original 
2)Imprimir os elementos da diagonal principal e * nos demais, mantendo a estrutura da matriz (cada elemento na sua posição). 
Autor: Anselmo Pestana R. Costa
Data Criação: 09/06/2020
Data Modificação: 09/06/2020
*/
#include<stdio.h>
#include<math.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>
main()
{
	
	int mat1[5][5];
	int l, c;
	srand(time(NULL));
	for (l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			mat1[l][c]=rand()%100;
			printf("%d\t", mat1[l][c]);
		}
		printf("\n");	}
	printf("\n----------------------------\n");
	for (l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			if (l==c)
				printf("%d\t", mat1[l][c]);
			else
				printf("*\t");
		}
		printf("\n");
	}
	
}
