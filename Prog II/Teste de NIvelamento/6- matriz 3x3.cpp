/*Criador: J�ssika Reis de Mello.
Testa de Nivelamento Prog II
Programa:Fa�a um programa para obter n�meros inteiros informados pelo usu�rio e 
armazene-os em uma matriz de 3x3 elementos. Multiplique cada elemento por 5 e imprimao resultado.
Data de cria��o:25/08/2020.*/

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
main()
{
	int linha, coluna, matriz[3][3];
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite n�meros inteiros: \n");
	for(int linha=0; linha<3; linha++)
	{
		for(int coluna=0; coluna<3; coluna++)
		{
			printf("\n%ix%i: ", linha+1, coluna+1);
			scanf("%i", &matriz[linha][coluna]);
		}
	}
	system("cls");
	printf("Matriz original: \n");
	for(int linha=0; linha<3; linha++)
	{
		for(int coluna=0; coluna<3;coluna++)	
		printf("%i\t", matriz[linha][coluna]);	
		printf("\n");	
	}
	printf("\n\nMatriz multiplicada por 5: \n");
	for(int linha=0; linha<3; linha++)
	{
		for(int coluna=0; coluna<3;coluna++)	
		printf("%i\t", matriz[linha][coluna]*5);
		printf("\n");		
	}	
	return 0;
}
