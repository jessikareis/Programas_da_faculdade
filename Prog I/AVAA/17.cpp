//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Faça um programa que receba dois números inteiros e 
//imprima os números inteiros que estão no intervalo compreendido por eles, 
//um ao lado do outro, separados por vírgula e ao final imprima o soma de todos os números e a média.
//Data de criação:17/06/2020.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int x, y, z, xy=0, maior, menor, soma;
	float media;
	
	
	printf("Escolha dois números:\n");
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
	printf("Números no intervalo de %i e %i: ", menor,maior);
	for(z=menor+1;z<maior;z++)
	{
		printf("%i  ",z);
		soma=soma+z;
		xy++;
	}
	media=soma/xy;
	printf("\nMédia = %.2f", media);
}
