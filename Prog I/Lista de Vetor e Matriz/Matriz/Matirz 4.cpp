/*Matriz
4)Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e
imprimir outra matriz multiplicando cada elemento da primeira matriz por 2. 

Criadora: Jéssika Reis de Mello*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<locale.h>
main()
{	
	
	srand(time(NULL));
	int a, s, v=3;
	int vet[v][v], vet2[v][v];
	
	setlocale(LC_ALL, "portuguese");
	printf("A matriz 3x3 é: \n");
	for(a=0;a<v;a++)
	{
		for(s=0;s<v;s++)
		{		
			vet[a][s]=rand()%10;
			printf("%i\t", vet[a][s]);
			vet2[a][s]=vet[a][s]*2;
		}
		printf("\n");
	}
	printf("\nA matriz vezes 2 é:\n");
	for(a=0;a<v;a++)
	{
		for(s=0;s<v;s++)	printf("%i\t", vet2[a][s]);
		
		printf("\n");						
	}
}
