//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Escreva um algoritmo para ler a quantidade em frutas adquiridas, 
//o modo de pagamento e ao final imprima o valor a ser pago pelo cliente, 
//com seus devidos cálculos discriminados..
//Data de criação:14/06/2020.
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL, "portuguese");

	int x=0, z=0, w=0;
	
	struct{
		char fruta[20], pagamento[20];
		float preco, bruto;
		float descontopagamento, valor, kg;
		
	}nota;

	printf("\t\tPreços: \n\nAté 5kg:");
	printf("\nMorango: R$8,50\t\tMaçã:R$7,20");
	printf("\n\nAcima de 5kg:");
	printf("\nMorango: R$7,50\t\tMaçã:R$6,50");
	printf("\n---------------------------------------");
	printf("\n\t\tPagamento:");
	printf("\n\nDinheiro: +10%% de desconto.");
	printf("\nDébito: +5%% de desconto.");
	printf("\nCrédito: Sem desconto.");
	printf("\n---------------------------------------");
	do
	{
	
		printf("\nEscolha 1-Morango ou 2-Maçã. ");
		fflush(stdin);
		scanf("%i", &z);
		if(z==1)
		{
			system("cls");
			printf("\t\tMorango");			
			strcpy(nota.fruta, "Morango");
			x=1;		
		}
		if(z==2)
		{
			system("cls");
			printf("\t\tMaçã");
			strcpy(nota.fruta, "Maçã");
			x=2;
		 } 
		
	}while(x==0);
	printf("\nQuantos kg? ");	
	scanf("%f", &nota.kg);	
	if(nota.kg<=5)
	{
		if(x==1) nota.preco=8.5;
		if(x==2) nota.preco=7.20;
	}
	if(nota.kg>5)
	{
		if(x==1) nota.preco=7.5;
		if(x==2) nota.preco=6.5;
	}
	nota.bruto=nota.preco*nota.kg;
	do
	{	
		system("cls");
		printf("Qual forma de pagamento?\n");
		printf("1 - Dinheiro\n2 - Débito\n3 - Crédito\n\n");
		scanf("%i", &z);
		switch (z)
		{
			case 1:
				strcpy(nota.pagamento,"Dinheiro");
				nota.descontopagamento=nota.bruto*0.1;
				nota.valor=nota.bruto-nota.descontopagamento;			
				w=1;
				break;					
			case 2:
				strcpy(nota.pagamento,"Débito");
				nota.descontopagamento=nota.bruto*0.05;
				nota.valor=nota.bruto-nota.descontopagamento;
				w=2;
				break;
			case 3:
				strcpy(nota.pagamento,"Crédito");
				nota.descontopagamento=0;
				nota.valor=nota.bruto-nota.descontopagamento;
				w=3;
				break;											
		}
	}while(w==0);
	system("cls");
	printf("--------------------------------\n");
	printf("\t\tNota Fiscal");
	printf("\n\nFruta:---------%s.", nota.fruta);
	printf("\nPagamento:-----%s.", nota.pagamento);
	printf("\nKg:------------%.1fkg.", nota.kg);
	printf("\nPreço kg:------R$%.2f.", nota.preco);
	printf("\nBruto:---------R$%.2f.", nota.bruto);
	printf("\nDesconto:------R$%.2f.", nota.descontopagamento);
	printf("\nTotal:---------R$%.2f.", nota.valor);
	
	
	
}
