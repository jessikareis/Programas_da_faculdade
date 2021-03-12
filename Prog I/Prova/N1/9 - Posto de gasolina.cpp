/*Prova N1
Autora: Jéssika Reis de Mello
Programa:Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
Álcool:até 20 litros, desconto de 2% por litro acima de 20 litros, desconto de 4% por litro 
Gasolina:até 20 litros, desconto de 3% por litro acima de 20 litros, desconto de 5% por litro 
Data: 19/06/2020*/
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
			d=3.8*0.02;
			p=3.8-d;
			x=l*p;
		}
		if(l>=21)
		{
			d=3.8*0.04;
			p=3.8-d;
			x=l*p;
		}
	}	
	if(strcmp(c,"g") == 0 )	
	{
		if (l<=20)
		{
			d=4.7*0.03;
			p=4.7-d;
			x=l*p;
		}
			if(l>=21)
			{
				d=4.7*0.05;
				p=4.7-d;
				x=l*p;
			}		
	}
	printf("\nValor total à pagar %.2f reais.", x);
}
