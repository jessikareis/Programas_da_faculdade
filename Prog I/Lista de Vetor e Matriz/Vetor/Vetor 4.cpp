/*Vetor
4)Preencher um vetor de 8 elementos inteiros. Mostrar o vetor e informar quantos
números são maior que 30, Somar estes números.
Somar todos os números

Criadora: Jéssika Reis de Mello*/

#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>
main()

{
	int maior=0, y=8, x=0, soma=0, mais30=0; 
	 int v[y]={};
	 
	srand(time(NULL));
	setlocale(LC_ALL, "portuguese");
	printf("Os vetores são:\n");

	for (x=0;x<y;x++)
	{
		v[x]=rand()%100;
		printf("%d\t", v[x]);
	}
	printf("\n Os números maiores que 30 são: \n");
	for (x=0;x<y;x++)
	{
		soma=soma+v[x];	
		if (v[x]>30)
		{
			printf("%d\t \n", v[x]);
			mais30=mais30+v[x];
		}
		
	}
	printf("\nA soma dos números maiores que 30 é: %i.\n", mais30);
	printf("\nA soma de todos os números deu: %i.\n",soma);
}
