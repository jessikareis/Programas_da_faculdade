/*Criadora: Jéssika Reis de Mello
Programa: 2 - Faça um programa C para calular o número de lâmpadas 60 watts necessárias para um determinado cômodo. O programa deverá ler um
conjunto de informações, tais como: tipo, largura e comprimento do cômodo. O programa termina quando o tipo de cômodo for igual -1. A
tabela abaixo mostra, para cada tipo de cômodo, a quantidade de watts por metro quadrado.
Dica: Use uma estrutura struct para agrupar logicamente as informações de um comodo (int tipo de comodo, float largura e float altura). Usar uma
função (float CalulaArea) para calcular a área do cômodo. Os atributos de entrada serão a largura e comprimento do cômodo. Usar uma função
(float Lampada) para calcular a quantidade de lâmpadas necesárias para o cômodo. Os atributos de entrada serão o tipo de cômodo e a metragem (em m2) do cômodo.
Data de criação: 30/06/2020*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
float areatotal (float compr, float larg)
{
	float area;
	area=larg*compr;
	return area;
}
float lamp(int tipo, float tama)
{
	int pot, quant;	
	if(tipo=0) pot=12;
	if(tipo=1) pot=15;
	if(tipo=2) pot=18;
	if(tipo=3) pot=20;
	if(tipo=4) pot=22;
	
	quant=(pot*tama)/60;
	return quant;
}
main()
{
	int x=0;
	struct
	{
	int tipo;
	float compr, larg, area, quant;	
	}comodo;
	
	while(1==1)
	{
	system("cls");
	setlocale(LC_ALL, "portuguese");
	printf("Digite o tipo do cômodo entre (0..4) ou (-1) para fechar: ");		
	scanf("%d", &comodo.tipo);			
	if(comodo.tipo == -1) return 0;
	else
	{
	if(comodo.tipo<0 || comodo.tipo>4)
	{
	printf("Valor inválido! Tente novamente :(\n");
	system("pause");
	}
	else
	{									
		printf("Digite o comprimento do cômodo: ");
		getchar();
		scanf("%f", &comodo.compr);
		printf("Digite a largura do cômodo: ");
		getchar();
		scanf("%f", &comodo.larg);
		comodo.area=areatotal(comodo.larg,comodo.compr);
		comodo.quant=lamp(comodo.tipo, comodo.area);
		printf("\n\nVocê irá precisar de %.0f lâmpadas.\n", (comodo.quant));
		system("pause");
	}
	}
	}
}
