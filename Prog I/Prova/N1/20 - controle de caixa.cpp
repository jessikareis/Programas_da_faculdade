/*Criadora: Jéssika Reis de Mello.
Programa:O Sr. Eliezer possui uma loja de conveniências e necessita de um programa para controlar suas vendas. Faça um programa que implemente um caixa. 
O programa deverá receber a quantidade e valor de cada produto vendido a um cliente. Uma opção deve ser informada pelo operador para indicar o início e o 
final da venda. 
Obs. Mercadorias serão classificadas como produto 1,2,3, etc (cada quantidade e valor fornecidos corresponderá a um produto)
O programa deve, ao final da venda mostrar o total e perguntar o valor em dinheiro que o cliente forneceu, para então calcular e mostrar o valor do troco. 
Após esta operação, o programa deverá voltar ao ponto inicial, para registrar a próxima compra. 
A saída deve ser conforme o exemplo abaixo: 
Lojas Corona
Produto 1: R$ 2.20 
Produto 2: R$ 5.80 
Produto 3: R$ 0 
Total: R$ 9.00 
Dinheiro: R$ 20.00 
Troco: R$ 11.00
Data de criação:01/07/2020.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
main()
{
	struct{
	char prod[100][100];
	float preco[100], totalpro[100];
	float total, din, troco;
	int quant[50];
} nota[100];
		
	int x, b=0,y , z, w=0, v, fisc, p;
	float caixa=0;	
	
	do
	{
		x=0;	
		system("cls");
		setlocale(LC_ALL, "portuguese");
		printf("\n********Lojas Corona********");	
		printf("\n\nTotal das vendas no dia: R$%.2f.", caixa);
		printf("\n\n1 - Orçamento\n2 - Sair e mostrar registros\n\n");
		fflush(stdin);
		scanf("%i", &v);
		if(v==2) x++;
		if(v==1) 
		{
			do
			{
				y=0;
				system("cls");
				printf("\n\t\t\tLoja Corona");
				printf("\n\nAssim que terminar o orçamento digite 'Fim'.");								
				w=0;
				do
				{
					z=0;
					printf("\n\n%i° prod: ", w+1);				
					fflush(stdin);
					gets(nota[b].prod[w]);					
					fisc=strcmp(nota[b].prod[w],"fim");
					if( fisc == 0) 
					{
						system("cls");
						for(int g=0;g<w;g++)
						{
							printf("\nProduto %iº: ", g+1);
							printf("R$%.2f x %i = R$%.2f --- '%s'", nota[b].preco[g], nota[b].quant[g], nota[b].totalpro[g], nota[b].prod[g]);
						}
							printf("\n\n\n\t\tValor total à pagar: R$%.2f\n\n\n", nota[b].total);							
							system("pause");
							z++;
					}												
					else
					{
						printf("\nQuantidade do produto: ");
						fflush(stdin);
						scanf("%i", &nota[b].quant[w]);
						printf("\nPreço do %s: ", nota[b].prod[w]);
						fflush(stdin);
						scanf("%f", &nota[b].preco[w]);
						nota[b].totalpro[w]=nota[b].preco[w]*nota[b].quant[w];
						nota[b].total=nota[b].total+nota[b].totalpro[w];									
						w++;						
					}									
				}while(z==0);
		do
			{
			system("cls");
			printf("\n********Loja Corona********");
			printf("\n\nQual valor o cliente pagou? ");
			fflush(stdin);
			scanf("%f", &nota[b].din);
			nota[b].troco=nota[b].din-nota[b].total;
			if(nota[b].din>=nota[b].total) p++;
			}while(p==0);	
			printf("\nTroco = R$%.2f\n\n\n", nota[b].troco);
			system("pause");
				
			caixa=caixa+nota[b].total;
			b++;
			y++;	
			}while(y==0);
		}
	}while(x==0);
			
	system("cls");
	printf("\n********Loja Corona********");	
	printf("\n\n\nTotal de vendas de hoje: R$%.2f.", caixa);
	printf("\n\n------------------------------\n");
	for(int j=0;j<b;j++)
	{
		printf("\t\t\tNota %i\n", j+1);	
		for(int g=0;g<w;g++)
		{
			printf("\nProduto %iº:'%s'", g+1, nota[j].prod[g]);
			printf(" --- R$%.2f x %i = R$%.2f", nota[j].preco[g], nota[j].quant[g], nota[j].totalpro[g]);
		}
		printf("\nTotal da compra = R$%.2f", nota[j].total);
		printf("\nPagamento = R$%.2f", nota[j].din);
		printf("\nTroco = R$%.2f", nota[j].troco);
		printf("\n------------------------------\n\n");
	}
	system("pause");
}

