/*Vetor
6) Neste exerc�cio temos dois vetores com 5 posi��es (0 a 4). Em cada vetor
entraremos com cinco n�meros. Mostrar os n�meros e depois somar n�meros que
perten�am a mesma posi��o ou seja:
[0]+[0],[1]+[1]

Criadora: J�ssika Reis de Mello*/

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
	printf("Os vetores s�o:\n");
	for(x=0;x<5;x++) 
	printf("%i\t", r[x]);
	printf("\n");
	
	for(x=0;x<5;x++) 
	printf("%i\t", t[x]);
	printf("\n\n");
	
	for(x=0;x<5;x++)
	{
	printf("A soma dos vetores na posi��o [%i] �: %i+%i=%i\n", x, r[x], t[x], r[x]+t[x]);
	}
}
