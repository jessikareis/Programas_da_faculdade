//6. Faça um programa que pergunte o preço de três produtos e informe qual produto você deve
//comprar, sabendo que a decisão é sempre pelo mais barato.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	float preco1=0, preco2=0, preco3=0;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite o primeiro preço:\n");
	scanf("%f", &preco1);
	
	printf("Digite o segundo preço:\n");
	scanf("%f", &preco2);
	
	printf("Digite o terceiro preço:\n");
	scanf("%f", &preco3);
	
	if(preco1<preco2 && preco1<preco3)
	{
		printf("O menor preço é: %.2f\n",preco1); //numero sem virgulo no resultado e so colocar %2.f
	
	}
	else
		if(preco2<preco1 && preco2<preco3)
		{
			printf("O menor preço é: %.2f\n",preco2); //numero sem virgulo no resultado e so colocar %2.f
		}
		
		else
			if(preco3<preco1 && preco3<preco2)
			{
				printf("O menor preço é: %.2f\n",preco3); //numero sem virgulo no resultado e so colocar %2.f
			}
}
