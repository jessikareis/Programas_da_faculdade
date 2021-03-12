/* 
Programa: Construir uma matriz de 5X5 de inteiros, preencher seus elementos 
com valores randômicos de 0 até 100 e após o preenchimento gerar uma outra 
matriz com o quadrado de cada componente da matriz original.
Ao final imprimir as matrizes.
Autor: Anselmo
Criação: 
Modificação:
*/
#include<stdio.h> // para usar scanf() e printf()
#include<time.h> // para usar a função time
#include<stdlib.h> // para usar o rand() e srand()
#include<math.h>
main()
{
	int mat1[5][5], mat2[5][5];
	int lin, col;
	srand(time(NULL));
	for (lin=0; lin<5; lin++)
	{
		for(col=0; col<5;col++)
		{
			mat1[lin][col]=1+rand()%20;
			mat2[lin][col]=pow(mat1[lin][col],2);
		}
	} 
	//Imprime a matriz original
	for (lin=0;lin<5;lin++)
	{
		for (col=0; col<5; col++)
		{
			printf("%d\t", mat1[lin][col]);
		}
		printf("\n\n");
	}
	printf("\n\n");
	//Imprime a matriz quadrada
	for (lin=0;lin<5;lin++)
	{
		for (col=0; col<5; col++)
		{
			printf("%d\t", mat2[lin][col]);
		}
		printf("\n\n");
	}	
	
}
