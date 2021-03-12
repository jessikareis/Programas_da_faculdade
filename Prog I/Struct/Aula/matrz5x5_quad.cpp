/*Construir uma matriz randômica de 5X5, após seus elementos e obter uma matriz 
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
	int l, c;
	srand(time(NULL));
	for (l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			mat1[l][c]=rand()%100;
			mat2[l][c]=pow(mat1[l][c],2);
			printf("%d\t", mat1[l][c]);
		}
		printf("\n");
	}
	printf("\n----------------------------\n");
	for (l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d\t", mat2[l][c]);
		}
		printf("\n");
	}
	
}
