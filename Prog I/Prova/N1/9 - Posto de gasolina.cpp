/*Prova N1
Autora: J�ssika Reis de Mello
Programa:Um posto est� vendendo combust�veis com a seguinte tabela de descontos: 
�lcool:at� 20 litros, desconto de 2% por litro acima de 20 litros, desconto de 4% por litro 
Gasolina:at� 20 litros, desconto de 3% por litro acima de 20 litros, desconto de 5% por litro 
Data: 19/06/2020*/
#include<stdio.h>
#include<string.h>
#include<locale.h>
main()
{
	float x, l, d, p;
	char c[1];
	setlocale(LC_ALL,"portuguese");
	printf("Digite A para consultar o valor do �lcool ou o G para valor da Gasolina.\n");
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
	printf("\nValor total � pagar %.2f reais.", x);
}
