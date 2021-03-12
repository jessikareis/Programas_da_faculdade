/*Vetor
6) Neste exercício temos dois vetores com 5 posições (0 a 4). Em cada vetor
entraremos com cinco números. Mostrar os números e depois somar números que
pertençam a mesma posição ou seja:
[0]+[0],[1]+[1]

Criadora: Jéssika Reis de Mello*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
main()

{	
	srand(time(NULL));
	int r[5]={}, t[5]={};
	int x;
	
	setlocale(LC_ALL,"portuguese");
	for(x=0;x<5;x++)
	{
	r[x]=rand()%100;
	t[x]=rand()%100;
	}
	printf("Os vetores são:\n");
	for(x=0;x<5;x++) 
	printf("%i\t", r[x]);
	printf("\n");
	
	for(x=0;x<5;x++) 
	printf("%i\t", t[x]);
	printf("\n\n");
	
	for(x=0;x<5;x++)
	{
	printf("A soma dos vetores na posição [%i] é: %i+%i=%i\n", x, r[x], t[x], r[x]+t[x]);
	}
}
