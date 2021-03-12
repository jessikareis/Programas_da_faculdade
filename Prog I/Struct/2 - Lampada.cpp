/*Criadora: J�ssika Reis de Mello
Programa: 2 - Fa�a um programa C para calular o n�mero de l�mpadas 60 watts necess�rias para um determinado c�modo. O programa dever� ler um
conjunto de informa��es, tais como: tipo, largura e comprimento do c�modo. O programa termina quando o tipo de c�modo for igual -1. A
tabela abaixo mostra, para cada tipo de c�modo, a quantidade de watts por metro quadrado.
Dica: Use uma estrutura struct para agrupar logicamente as informa��es de um comodo (int tipo de comodo, float largura e float altura). Usar uma
fun��o (float CalulaArea) para calcular a �rea do c�modo. Os atributos de entrada ser�o a largura e comprimento do c�modo. Usar uma fun��o
(float Lampada) para calcular a quantidade de l�mpadas neces�rias para o c�modo. Os atributos de entrada ser�o o tipo de c�modo e a metragem (em m2) do c�modo.
Data de cria��o: 30/06/2020*/
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
	printf("Digite o tipo do c�modo entre (0..4) ou (-1) para fechar: ");		
	scanf("%d", &comodo.tipo);			
	if(comodo.tipo == -1) return 0;
	else
	{
	if(comodo.tipo<0 || comodo.tipo>4)
	{
	printf("Valor inv�lido! Tente novamente :(\n");
	system("pause");
	}
	else
	{									
		printf("Digite o comprimento do c�modo: ");
		getchar();
		scanf("%f", &comodo.compr);
		printf("Digite a largura do c�modo: ");
		getchar();
		scanf("%f", &comodo.larg);
		comodo.area=areatotal(comodo.larg,comodo.compr);
		comodo.quant=lamp(comodo.tipo, comodo.area);
		printf("\n\nVoc� ir� precisar de %.0f l�mpadas.\n", (comodo.quant));
		system("pause");
	}
	}
	}
}
