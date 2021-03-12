/*Vetor
13)Preencher um vetor com 6 números e mostra-los na tela. 
Jéssika Reis de Mello*/

#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>

main()
{
	int x=0, num=0, y=6; 
	int v[y]={};
	srand(time(NULL));
	setlocale(LC_ALL,"portuguese");	
	printf("Os vetores são:\n");

	for (x=0;x<y;x++)
	{
	v[x]=rand()%100;
	printf("%d\t",v[x]);
	}
}
