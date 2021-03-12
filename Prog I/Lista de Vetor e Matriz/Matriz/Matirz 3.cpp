/*Matriz
3)Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e
imprimir todos os elementos, exceto os elementos da diagonal principal.

Criadora: Jéssika Reis de Mello*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<locale.h>

main()
{	
	
	srand(time(NULL));
	int a, s, d, v=3;
	int vet[v][v];
	
	setlocale(LC_ALL, "portuguese");
	printf("A matriz 3x3 é:\n");
	for(a=0;a<v;a++)
	{
		for(s=0;s<v;s++)
		{
		
		vet[a][s]= rand()%100;
		printf("%i\t", vet[a][s]);
		}
		printf("\n");	
	}
	
		printf("\n\nSua diagonal principal é:\n");
		for(d=0;d<v;d++) printf("%i\t", vet[d][d]);
		printf("\n\nA matriz sem a diagonal principal é:\n\n");
	
	for(a=0;a<v;a++)
	{
		for(s=0;s<v;s++)
		{
		if(a!=s)	printf("%i\t", vet[a][s]);
		}
		printf("\n");	
	}
}
