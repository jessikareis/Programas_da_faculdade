/*Criador: J�ssika Reis de Mello.
Testa de Nivelamento Prog II
Programa:Fa�a um programa em C para calcular a �rea de um terreno. Considere apenas largura e comprimento.
Data de cria��o:23/08/2020.*/
#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	float compri, larg, area;
	
	printf("*********** Calcular a �rea do terreno ***********");
	printf("\n\nDigite o comprimento do terreno: ");
	scanf("%f", &compri);
	printf("Digite a largura do terreno: ");
	scanf("%f", &larg);
	
	area=compri*larg;

	printf("\nA �rea do terreno � = %.1f m�", area);
}
