/*Criador: Jéssika Reis de Mello.
Lista 1
Programa: 8.5 - matriz 3x4, contendo peso em kilograma do produto. o programa devera exibir o conteudo da matriz de 2 formas.
Data de criação:14/09/2020.*/
#include<stdio.h>

main()
{
	
	float kg[3][4], lb[3][4];
	int w=0;
	for(int x=0; x<3; x++)
	{
		for(int y=0; y<4; y++)
		{
			w++;
			printf("\nDigite o peso %i do produto: ", w);
			fflush(stdin);
			scanf("%f", &kg[x][y]);
			lb[x][y]=kg[x][y]/0.454;
		}
	}
	printf("\n****Matriz em kg****\n");
	for(int x=0; x<3; x++)
	{
		for(int y=0; y<4; y++)
		{
			
			printf("%.2f\t", kg[x][y]);
		
		}
		printf("\n");
	}
	printf("\n\n****Matriz em libra****\n");
	for(int x=0; x<3; x++)
	{
		for(int y=0; y<4; y++)
		{
			
			printf("%.2f\t", lb[x][y]);
		}
		printf("\n");
	}
}
