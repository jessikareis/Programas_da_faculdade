/*Desafio 2
Autora: Jéssika Reis de Mello
Programa: Criar um programa que seja capaz de ordenar um vetor de n inteiros.
Usar método de ordenação bubble sort.
Data:24/06/2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Informe a quantidade de números que serão ordenados: ");
	scanf("%i", &num);
	int a[num], ord;	
	printf("\nOs números são: ");
	
	for(int i=0; i<num; i++)
	{
		a[i]=rand()%100;
		printf("%i\t", a[i]);
	}		
	for(int i=1; i<num; i++)
	{
		for(int b=0;b<num-1;b++)
		{
			if(a[b]>a[b+1])
			{
				ord=a[b];
				a[b]=a[b+1];
				a[b+1]=ord;
			}
		}
	}
	printf("\n\nOs números ordenados são:");
	for(int i=0; i<num; i++) 
	printf("%3d", a[i]);	
}
