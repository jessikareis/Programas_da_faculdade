//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Faça um Programa que leia quatro números e mostre o maior e o menor deles.
//Data de criação:14/06/2020.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	
	int z, x[4], maior, menor;
	
	printf("Digite quatro números.");
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
	printf("O maior é : %i ", maior);
	printf("\nO menor é : %i ", menor);
	
	
	
	
}
