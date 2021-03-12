/*Criador: Jéssika Reis de Mello.
Testa de Nivelamento Prog II
Programa:Faça um programa em C para calcular a área de um terreno. Considere apenas largura e comprimento.
Data de criação:23/08/2020.*/
#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	float compri, larg, area;
	
	printf("*********** Calcular a área do terreno ***********");
	printf("\n\nDigite o comprimento do terreno: ");
	scanf("%f", &compri);
	printf("Digite a largura do terreno: ");
	scanf("%f", &larg);
	
	area=compri*larg;

	printf("\nA área do terreno é = %.1f m²", area);
}
