/*22. Uma fruteira está vendendo frutas com a seguinte tabela de preços:
o Até 5 Kg Acima de 5 Kg
o Morango R$ 2,50 por Kg R$ 2,20 por Kg
o Maçã R$ 1,80 por Kg R$ 1,50 por Kg
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$25,00, 
receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para
ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e
escreva o valor a ser pago pelo cliente.*/

#include<stdio.h>
#include<locale.h>
main()
{
	float kg, pr;
	int n;
	
	setlocale(LC_ALL,"portuguese");
	printf("Escolha 1 ou 2 :");
	printf("\n1-Morango");
	printf("\n2-Maçã\n");
	scanf("%i", &n);
	
	if (n==1 || n==2)
	{
		if(n==1)
		{
			printf("\nConsultar o preço do morango:");
			printf("\nQuantos Kg?\n");
			scanf("%f", &kg);
			
			if(kg<=5)	
			pr=kg*2.5;
	
			if(kg>5)	
			pr=kg*2.20;
				
			if(kg>8||pr>25) 
			pr=(pr-(pr*0.1));
				
		}
		if(n==2)
		{
			printf("\nConsultar o preço da maçã:");
			printf("\nQuantos kg?\n");
			scanf("%f", &kg);
			
			if(kg<=5)	
			pr=kg*1.8;
			
			if(kg>5) 	
			pr=kg*1.5;
			
			if(kg>8||pr>25) 
			pr=(pr-(pr*0.1));
		}
			printf("\n Valor total a pagar: %.2f", pr);
	}

}
