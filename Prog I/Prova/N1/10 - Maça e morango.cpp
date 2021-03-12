/*Criadora: J�ssika Reis de Mello.
Programa:Uma fruteira est� vendendo frutas com a seguinte tabela de pre�os: 
At� 5 Kg 
Morango R$ 8,50 e Ma�� R$ 7,20 por Kg
Acima de 5 Kg 
Morango R$ 7,50 e Ma�� R$ 6,50 por Kg
Se o cliente for pagar em dinheiro receber� ainda um desconto de 10% , no cart�o de d�bito 5% e no cr�dito n�o ter� desconto.
Escreva um algoritmo para ler a quantidade em frutas adquiridas, o modo de pagamento e ao final imprima o valor a ser pago pelo cliente, 
com seus devidos c�lculos discriminados..
Data de cria��o:30/06/2020.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	int x=0, y=0, z=0;
	
	struct{
		char fruta[60], pag[60];
		float prc, bruto;
		float descpag, valor, kg;
		
	}
	nota;

	setlocale(LC_ALL, "portuguese");
	printf("\t\tPre�os: \n\nAt� 5kg:");
	printf("\nMorango: R$8,50\t\tMa��:R$7,20");
	printf("\n\nAcima de 5kg:");
	printf("\nMorango: R$7,50\t\tMa��:R$6,50");
	printf("\n---------------------------------------");
	printf("\n\t\tPagamento:");
	printf("\n\nDinheiro: +10%% de desconto.");
	printf("\nD�bito: +5%% de desconto.");
	printf("\nCr�dito: Sem desconto.");
	printf("\n---------------------------------------");
	do
	{
	
		printf("\nEscolha \n1-Morango ou \n2-Ma��: ");
		fflush(stdin);
		scanf("%i", &y);
		if(y==1)
		{
			system("cls");
			printf("\t\tMorango");			
			strcpy(nota.fruta, "Morango");
			x=1;		
		}
		if(y==2)
		{
			system("cls");
			printf("\t\tMa��");
			strcpy(nota.fruta, "Ma��");
			x=2;
		 } 
		
	}while(x==0);
	printf("\nQuantos kg? ");	
	scanf("%f", &nota.kg);	
	if(nota.kg<=5)
	{
		if(x==1) nota.prc=8.5;
		if(x==2) nota.prc=7.20;
	}
	if(nota.kg>5)
	{
		if(x==1) nota.prc=7.5;
		if(x==2) nota.prc=6.5;
	}
	nota.bruto=nota.prc*nota.kg;
	do
	{	
		system("cls");
		printf("Qual forma de pagamento?\n");
		printf("1 - Dinheiro\n2 - D�bito\n3 - Cr�dito\n\n");
		scanf("%i", &y);
		switch (y)
		{
			case 1:
				strcpy(nota.pag,"Dinheiro");
				nota.descpag=nota.bruto*0.1;
				nota.valor=nota.bruto-nota.descpag;			
				z=1;
				break;					
			case 2:
				strcpy(nota.pag,"D�bito");
				nota.descpag=nota.bruto*0.05;
				nota.valor=nota.bruto-nota.descpag;
				z=2;
				break;
			case 3:
				strcpy(nota.pag,"Cr�dito");
				nota.descpag=0;
				nota.valor=nota.bruto-nota.descpag;
				z=3;
				break;											
		}
	}while(z==0);
	system("cls");
	printf("----------------------------\n");
	printf("\t\tNota Fiscal");
	printf("\n\nFruta:---------%s.", nota.fruta);
	printf("\nPagamento:-----%s.", nota.pag);
	printf("\nKg:------------%.1fkg.", nota.kg);
	printf("\nPre�o kg:------R$%.2f.", nota.prc);
	printf("\nBruto:---------R$%.2f.", nota.bruto);
	printf("\nDesconto:------R$%.2f.", nota.descpag);
	printf("\nTotal:---------R$%.2f.", nota.valor);
	
	
	
}
