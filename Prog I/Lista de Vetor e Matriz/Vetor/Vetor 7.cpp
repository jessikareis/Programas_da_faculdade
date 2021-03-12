/*Vetor
7)Preencher um vetor de 8 elementos inteiros. Mostrar o vetor e informar quantos
números são maior que 30

criadora: Jéssika Reis de Mello*/

#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>
main()

{
	int x=0, y=8,  maior=0; 
	int v[y]={};
	srand(time(NULL));
	
	setlocale(LC_ALL,"portuguese");	
	printf("Os vetores são:\n");

	for (x=0;x<y;x++)
	{
	v[x]=rand()%100;
	printf("%d\t", v[x]);
	}
	printf("\nOs números maiores que 30 são: \n");
	for (x=0;x<y;x++)
	{		
		if (v[x]>30)	printf("%d\t", v[x]);		
	}	
}
