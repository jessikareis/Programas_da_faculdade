//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Fa�a um programa que receba dois n�meros inteiros e 
//imprima os n�meros inteiros que est�o no intervalo compreendido por eles, 
//um ao lado do outro, separados por v�rgula e ao final imprima o soma de todos os n�meros e a m�dia.
//Data de cria��o:17/06/2020.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int x, y, z, xy=0, maior, menor, soma;
	float media;
	
	
	printf("Escolha dois n�meros:\n");
	scanf("%i  %i", &x, &y);
	if(x<y)
	{
		maior=y;
		menor=x;
	}
		if(x>y)
	{
		maior=x;
		menor=y;
	}
	system("cls");
	printf("N�meros no intervalo de %i e %i: ", menor,maior);
	for(z=menor+1;z<maior;z++)
	{
		printf("%i  ",z);
		soma=soma+z;
		xy++;
	}
	media=soma/xy;
	printf("\nM�dia = %.2f", media);
}
