/*
Programa: Construir uma matriz randômica de 5X5, após seus elementos e obter uma matriz 
com o quadrado de cada coponente da matriz original.
Ao final imprimir as matrizes.
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
	int mat1[5][5], mat2[5][5];
	int lin, col;
	srand(time(NULL));
	// criar matrizes
	for (lin=0; lin<5; lin++)
	{
		for(col=0; col<5;col++)
		{
			// Preencher a matriz com valores randômicos de 0 a 100
			mat1[lin][col]=rand()%100;
			// criar nova matriz com o quadrado de cada elemento
			mat2[lin][col]=pow(mat1[lin][col],2);
		}		
	}
	//Imprimir matriz original
	for (lin=0; lin<5; lin++)
	{
		for(col=0; col<5; col++)
		{
			printf("(%d:%d) %d\t", lin, col,mat1[lin][col]);
		}
		printf("\n\n");
	}	
	// imprimir matriz quadrada
	printf("\n\n------------------\n\n");
	for(lin=0; lin<5; lin++)
	{
		for(col=0; col<5; col++)
		{
			printf("(%d:%d) %d\t", lin, col, mat2[lin][col]);
		}
		printf("\n\n");
	}
}
