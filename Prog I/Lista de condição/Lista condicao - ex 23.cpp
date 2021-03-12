/*23. O Hipermercado Tabajara está com uma promoção de carnes que é imperdível. Confira:
o Até 5 Kg Acima de 5 Kg
o File Duplo R$ 4,90 por Kg R$ 5,80 por Kg
o Alcatra R$ 5,90 por Kg R$ 6,80 por Kg
o Picanha R$ 6,90 por Kg R$ 7,80 por Kg
Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos de carne da promoção, porém não há limites para a quantidade de carne por cliente. 
Se compra for feita no cartão Tabajara o cliente receberá ainda um desconto de 5% sobre o total da compra. Escreva um programa que peça o tipo e a quantidade de carne
comprada pelo usuário e gere um cupom fiscal, contendo as informações da compra:
tipo e quantidade de carne, preço total, tipo de pagamento, valor do desconto e valor a pagar.*/

#include<stdio.h>
#include<string.h>
#include<locale.h>
main()
{
	float kg, pr1, pr2, d;
	int x, y;
	char f[20]="File Duplo", a[10]="Alcatra", p[10]="Picanha", c[1], cartao[20]="Cartão Tabajara", din[15]="Dinheiro", z[1] ;
	
	setlocale(LC_ALL,"portuguese");
	printf("Qual tipo de carne comprada? (ESCOLHA DE 1 A 3).\n");	
	printf("\n1-File Duplo \n2-Alcatra \n3-Picanha\n");
	scanf("%i", &x);
	
	if(x>=1 && x<=3)
		{
			printf("\nQuantos kg?\n");
			scanf("%f", &kg);
			if(x==1)
			{
				if(kg<=5)	
				pr1=4.9*kg;
				
				if(kg>5)	
				pr1=5.8*kg;
				
				strcpy(c,f);
			}
			
			if(x==2)
			{
				if(kg<=5)	
				pr1=5.9*kg;
				
				if(kg>5)	
				pr1=6.8*kg;
				
				strcpy(c,a);
			}
			if(x==3)
			{
				if(kg<=5)	
				pr1=6.9*kg;
				
				if(kg>5)	
				pr1=7.8*kg;
				
				strcpy(c,p);
			}
			
			printf("\nForma de pagamento? Digite 1 ou 2\n");
			printf("\n1-Dinheiro \n2-Cartão Tabajara\n");
			scanf("%i", &y);
			pr2=pr1;
			d=0;

			if(y==2) 
			{
				d=pr1*0.05;
				strcpy(z,cartao);
				pr2=pr1-d;	
			}

			else 
				strcpy(z,din);
					
			printf("\n------------Nota fiscal------------");
			printf("\nCarne comprada: %s.",c);
			printf("\nQuantidade comprada: %.2f kg.", kg);				
			printf("\nPreço Total: R$ %2.f", pr1);
			printf("\nTipo de pagamento: %s", z);
			printf("\nValor do desconto: %.2f", d);
			printf("\nTotal à pagar: R$ %.2f", pr2);

		}
}
