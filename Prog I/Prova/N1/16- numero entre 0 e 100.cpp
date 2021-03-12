/*Criador: Jéssika Reis de Mello.
Programa:Faça um programa que gere 100 números aleatórios entre 0 e 1000 e informe o maior deles.
Data de criação:30/06/2020.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
main()
{
		srand(time(NULL));
	int x, y, maior, menor;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Os números gerados são: \n");
	for(x=1;x<=100;x++)
	{
		y=rand()%1001;
		printf("%i\t", y);
		if(x==1)
		{
			maior=y;
			menor=y;
		}
		if(y>maior) maior=y;
		if(y<menor)	menor=y;
			
	}
	printf("\n\nMaior: %i\nMenor: %i",maior, menor);
	
}

