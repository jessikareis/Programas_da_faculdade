/*Criadora: Jéssika Reis de Mello.
Programa: Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
o Para homens: (72.7*h) - 58
o Para mulheres: (62.1*h) - 44.7
OBS - Não pode ser usado comandos de condição.
Data de criação:30/06/2020.*/
#include<stdio.h>
#include<locale.h>
main()
{
	float pesoH, pesoM, h;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite a sua altura? ");
	scanf("%f", &h);
	pesoH=(72.7*h)-58;
	pesoM=(62.1*h)-44.7;
	printf("\nPeso ideal para um homem: %.2f", pesoH);
	printf("\nPeso ideal para uma mulher: %.2f", pesoM);
}
