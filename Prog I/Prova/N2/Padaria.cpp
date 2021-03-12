/*Criadora: Jéssika Reis de Mello
Programa: Construir um programa para atender ao seu José da padaria. Ele esta querendo cadastrar seus produtos, para que possa posteriormente consulta-los.
Com objetivo de ajuda-lo crie um programa em C com uma estrutura capaz de armazenar os dados dos produtos disponíveis na padaria.
O programa deve ter as opções de cadastrar, imprimir e terminar. (só deve terminar quando for solicitado pelo usuário)
Produtos a serem cadastrados:
Feijão preto
Arroz branco
Farinha amarela
Biscoito
A estrutura de dados deve levar em conta que os produtos devem ter um código, descrição, Unidade (se é KG, CX, PCT, etc, ), quantidade, preço de compra, percentual de 
venda. Após o cadastro das mercadorias, o programa deve poder imprimir o estoque total de produtos cadastrados com o custo total de compra e o valor total, caso todos 
produtos sejam vendidos.
Data de criação:15/07/2020.
Horário: 14:15*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int x,y=0;
	struct
	{
		char produto[50][50],medida[50][50];
		float quantidade[50],unit[50],percentual[50], produto2[50],soma=0,estimado=0;
		
	
	}pad;		
	while(true)
	{
		system("cls");
		setlocale(LC_ALL, "portuguese");
		printf("\n\t**********Padaria Do José**********");
		printf("\n\n1-Cadastrar\n2-Imprimir\n3-Fechar\n");
		fflush(stdin);
		scanf("%d", &x);
		if(x==1)
		{
			system("cls");
			printf("\n\t**********Padaria Do José**********");
			printf("\n\nProduto %i: ", y+1);
			fflush(stdin);
			gets(pad.produto[y]);
			printf("\nMedida: ");
			fflush(stdin);			
			gets(pad.medida[y]);
			printf("\nQuantidade: ");
			fflush(stdin);
			scanf("%f", &pad.quantidade[y]);
			printf("\nPreço unitário: R$");
			fflush(stdin);
			scanf("%f", &pad.unit[y]);
			printf("\nPercentual de venda (%%): ");
			fflush(stdin);
			scanf("%f", &pad.percentual[y]);
			pad.produto2[y]=pad.quantidade[y] * pad.unit[y];
			pad.soma = pad.soma + pad.produto2[y];
			pad.estimado = pad.estimado + (pad.produto2[y]*pad.percentual[y]/100 );	
			y++;
		}
		if(x==2)
		{
			system("cls");
			printf("\n\t**********Padaria Do José**********");
			printf("Cod\tProduto\t Unid\tQuantidade\tPreçoUnit\t%%Venda\tPreçoTotal\n");
			for(int w=0; w<y; w++)
			{
				printf("\n0%d", w+1);
				printf("\t%s", pad.produto[w]);
				printf("\t%5s", pad.medida[w]);
				printf("\t%10.1f", pad.quantidade[w]);
				printf("\t\t %.2f", pad.unit[w]);
				printf("\t \t%.1f", pad.percentual[w]);
				printf("\t%.2f", pad.produto2[w]);
			}
			printf("\n\nValor estimado = R$%2.2f", pad.estimado);
			printf("\nValor total de estoque = R$%2.2f\n\n\n", pad.soma);
			system("pause");
		}
		if(x==3) return 0;		
	}	
}

