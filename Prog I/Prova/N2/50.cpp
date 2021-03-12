/*Criadora: Jéssika Reis de Mello
Programa: Construir um programa que ordene um vetor de 50 posições do tipo inteiro em ordem crescente. O programa deve informar (imprimir) para o usuário as trocas 
realizadas e o seu total.
Para facilitar o preenchimento do vetor, sugiro a utilização da função rand() com valores limitados entre 0 e 100.
Data de criação:15/07/2020.
Horário: 12:47*/

#include <stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(NULL));
	int a[50]={}, ord, x;
		
	setlocale(LC_ALL,"portuguese");
	printf("Vetor Original:\n");
	for(int i=0; i<50; i++)
	{
		a[i]=rand()%100;
		printf("%d\t", a[i]);
	}		
	printf("\n\nTrocas:");
	
	for(int i=0; i<50; i++)
	{
		for(int b=0;b<50-1;b++)
		{
			if(a[b]>a[b+1])
			{
			ord=a[b];
			a[b]=a[b+1];
			a[b+1]=ord;
			x++;
			printf("\nVet[%d]=%d x Vet[%d]=%d --> troca %d", b, a[b+1], b+1, a[b], x);
			}
		}
	}
	printf("\n\nVetor organizado:\n");
	
	for(int i=0; i<50; i++)
	printf("%d\t",a[i]);
	
	printf("\n\nTrocas = %d - ", x);
	
	if (x>400) printf("Pior caso");
	if (x > 200 && x <400) printf("Caso médio");
	if (x<200) printf ("Melhor caso");
}
