//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Fa�a um Programa que leia quatro n�meros e mostre o maior e o menor deles.
//Data de cria��o:14/06/2020.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	
	int z, x[4], maior, menor;
	
	printf("Digite quatro n�meros.");
	for(z=0;z<4;z++)
	{
		scanf("\n%i", &x[z]);
		if (z==0)
		{
			maior=x[z];
			menor=x[z];
		}
		if(x[z]>maior) maior=x[z];
		if(x[z]<menor) menor=x[z];
	}
	system("cls");
	printf("O maior � : %i ", maior);
	printf("\nO menor � : %i ", menor);
	
	
	
	
}
