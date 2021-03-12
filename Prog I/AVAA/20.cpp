//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Faça um programa que permita ao usuário fornecer dois números, base e expoente
//, e calcule e mostre o primeiro número elevado ao segundo número.
//Data de criação:17/06/2020.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main()
{
	struct{
		char produto[50][50];
		float preco[50], totalpro[50];
		float total, dinheiro, troco;
		int quantidade[50];
	} nota[50];
		
	setlocale(LC_ALL, "portuguese");
	int x, b=0,y , z, xx=0, v, veri, l;
	float caixa=0;	
	
	do
	{
		x=0;	
		system("cls");
		printf("\n\t\t\tLoja Corona");	
		printf("\n\nTotal de venda no dia: R$%.2f.", caixa);
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
				printf("\n\nQuando desejar encerrar o orçamento digite 'fim'.");								
				xx=0;
				do
				{
					z=0;
					printf("\n\n%i° produto: ", xx+1);				
					fflush(stdin);
					gets(nota[b].produto[xx]);					
					veri=strcmp(nota[b].produto[xx],"fim");
					if( veri == 0) 
					{
						system("cls");
						for(int aaa=0;aaa<xx;aaa++)
						{
							printf("\nProduto %iº: ", aaa+1);
							printf("R$%.2f x %i = R$%.2f --- '%s'", nota[b].preco[aaa], nota[b].quantidade[aaa], nota[b].totalpro[aaa], nota[b].produto[aaa]);
						}
							printf("\n\n\n\t\tValor a pagar: R$%.2f\n\n\n", nota[b].total);							
							system("pause");
							z++;
					}												
					else
					{
						printf("\nQuantidade: ");
						fflush(stdin);
						scanf("%i", &nota[b].quantidade[xx]);
						printf("\nPreço do %s: ", nota[b].produto[xx]);
						fflush(stdin);
						scanf("%f", &nota[b].preco[xx]);
						nota[b].totalpro[xx]=nota[b].preco[xx]*nota[b].quantidade[xx];
						nota[b].total=nota[b].total+nota[b].totalpro[xx];									
						xx++;						
					}									
				}while(z==0);

				do
				{
					system("cls");
					printf("\n\t\t\tLoja Corona");
					printf("\n\nQuanto o cliente pagou? ");
					fflush(stdin);
					scanf("%f", &nota[b].dinheiro);
					nota[b].troco=nota[b].dinheiro-nota[b].total;
					if(nota[b].dinheiro>=nota[b].total) l++;
				}while(l==0);	
				printf("\nTroco = R$%.2f\n\n\n", nota[b].troco);
				system("pause");
				
				caixa=caixa+nota[b].total;
				b++;
				y++;
					
			}while(y==0);
		}
		
	}while(x==0);
			
	system("cls");
	printf("\n\t\t\tLoja Corona");	
	printf("\n\n\nTotal hoje: R$%.2f.", caixa);
	printf("\n\n-----------------------------------------------\n");
	for(int bbb=0;bbb<b;bbb++)
	{
		printf("\t\t\tNota %i\n", bbb+1);	
		for(int aaa=0;aaa<xx;aaa++)
		{
			printf("\nProduto %iº:'%s'", aaa+1, nota[bbb].produto[aaa]);
			printf(" --- R$%.2f x %i = R$%.2f", nota[bbb].preco[aaa], nota[bbb].quantidade[aaa], nota[bbb].totalpro[aaa]);
		}
		printf("\nTotal = R$%.2f", nota[bbb].total);
		printf("\nPagamento = R$%.2f", nota[bbb].dinheiro);
		printf("\nTroco = R$%.2f", nota[bbb].troco);
		printf("\n-----------------------------------------------\n\n");
	}
	system("pause");
}

