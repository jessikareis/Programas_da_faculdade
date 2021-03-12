/*Criadora: Jéssika Reis de Mello
Programa: 3 - Faça um programa que controle os estoque de 5 produtos em 5 armazéns de um supermercado, conforme figura abaixo: O programa deverá ler o número da linha 
e da coluna, correspondente ao produto no armazém, e a quantidade a ser retirada do estoque. Caso a quantidade solicitada seja menor ou igual a quantidade em estoque, o
programa deverá emitir uma mensagem de atendimento e dar baixa no estoque. Do contrário, emitir mensagem, "Estoque com quantidade insuficiente para atender ao pedido".
O programa termina quando o número da linha for igual a -1.
Utilize a declaração abaixo para preencher o estoque dos armazéns:
int estoque[5][5]= {{150,0,100,150,200}, {200,300,230,100,90},
{250,300,0,200,150}, {300,100,90,450,0},{350,300,400,250,200}}
Data de criação: 02/0/76/2020*/
#include<stdio.h>
#include<stdlib.h>
#include<locale>
main()
{
	int estoque[5][5]= {{150,0,100,150,200}, {200,300,230,100,90},
		{250,300,0,200,150}, {300,100,90,450,0},{350,300,400,250,200}};
	
	int l, c, ret;
	while(1==1)
	{	
		system("cls");
		setlocale(LC_ALL, "portuguese");
		printf("\n---------------------------------------Estoque-------------------------------------------------------\n\t");		
		for(int x=0; x<5; x++)
		{
			printf("\t  Produto %d", x);
		}
		for(int x=0; x<5; x++)
		{
			printf("\n\nArmazém %i", x);
			for(int y=0;y<5;y++)
			{
				printf("\t%8i", estoque[x][y]);
			}
		}
		printf("\n\n-----------------------------------------------------------------------------------------------------\n");
		printf("\n\t\t\t\t\t\tRetirada\n");
		printf("\nEscolha um armazém, para sair digite -1:  ");		
		while(1==1)
		{
			scanf("%d", &l);
			if(l==-1) return 0;
			if(l<0||l>4) printf("\nDigite um valor válido: ");
			else break;
		}
		printf("\nEscolha um produto: ");
		while(1==1)
		{
			scanf("%d", &c);
			if(c<0||c>4) printf("\nDigite um valor válido: ");
			else break;
		}

		printf("\nQuanto vai ser a retirar? ");
		scanf("%d", &ret);
		if(estoque[l][c]<ret) 
		printf("\nEstoque insuficiente para o atendimento.\n\n");
		else estoque[l][c]=estoque[l][c]-ret;
		system("pause");
	}	
}
