/*Criador: J�ssika Reis de Mello.
Lista 1
Programa: 3- REPETI��O
3.3) Obter 10 n�meros inteiros e imprimir o menor deles.
Data de cria��o:31/08/2020.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	
	int z, x[10], menor;
	
	setlocale(LC_ALL, "portuguese");
	printf("Digite 10 n�meros.");
	for(z=0;z<10;z++)
	{
		scanf("\n%i", &x[z]);
		if (z==0)
		{
			menor=x[z];
		}
		if(x[z]<menor) menor=x[z];
	}
	system("cls");
	printf("\nO menor � : %i ", menor);
	
}
