/*21. Um posto está vendendo combustíveis com a seguinte tabela de descontos:
. Álcool:
a. até 20 litros, desconto de 3% por litro
b. acima de 20 litros, desconto de 5% por litro
c. Gasolina:
d. até 20 litros, desconto de 4% por litro
e. acima de 20 litros, desconto de 6% por litro 
Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina),
calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50 o preço do litro do álcool é R$ 1,90.*/

#include<stdio.h>
#include<string.h>
#include<locale.h>
main()
{
	float x, l, d, p;
	char c[1];
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite A para consultar o valor do Álcool ou o G para valor da Gasolina.\n");
	gets(c); 
	printf("Quantos litros? \n");
	scanf("%f", &l);
	if(strcmp(c,"a")== 0)
	{
		if (l<=20)
		{
			d=1.9*0.03;
			p=1.9-d;
			x=l*p;
		}
		if(l>=21)
		{
			d=1.9*0.05;
			p=1.9-d;
			x=l*p;
		}
		
	}
			
		
	if(strcmp(c,"g") == 0 )	
	{
		if (l<=20)
		{
			d=2.5*0.04;
			p=2.5-d;
			x=l*p;
		}
			if(l>=21)
			{
				d=2.5*0.06;
				p=2.5-d;
				x=l*p;
			}
			
	}
	printf("\nValor total à pagar %.2f reais.", x);
}
