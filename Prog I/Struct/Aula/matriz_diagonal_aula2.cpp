/* 
Programa: Programa: Criar um algoritmo que leia os elementos de uma matriz previamente criada 
com valores inteiros aleatórios de 0 a 100  com dimensão de 5 x 5 e:
1)Imprimir a matriz original 
2)Imprimir os elementos da diagonal principal e * nos demais, mantendo a estrutura da matriz 
(cada elemento na sua posição). 
Autor: Anselmo
Criação: 09/06/2020
Modificação: 09/06/2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int mat1[5][5];
	int lin, col;
	srand(time(NULL));
	for (lin=0; lin<5;lin++)
	{
		for(col=0;col<5;col++)
		{
			mat1[lin][col]=rand()%100;
		}
	}
	// Imprimir a matriz original
	for (lin=0; lin<5; lin++)
	{
		for(col=0; col<5; col++)
		{
			printf("%d\t", mat1[lin][col]);
		}
		printf("\n\n");
	}
	printf("\n\n");
	//Imprimir a matriz com * e diagonal
	for (lin=0; lin<5; lin++)
	{
		for(col=0; col<5; col++)
		{
			if (lin==col)
				printf("%d\t", mat1[lin][col]);
			else
				printf("*\t");
		}
		printf("\n\n");
	}
}

