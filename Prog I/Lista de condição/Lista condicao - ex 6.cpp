//6. Fa�a um programa que pergunte o pre�o de tr�s produtos e informe qual produto voc� deve
//comprar, sabendo que a decis�o � sempre pelo mais barato.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	float preco1=0, preco2=0, preco3=0;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite o primeiro pre�o:\n");
	scanf("%f", &preco1);
	
	printf("Digite o segundo pre�o:\n");
	scanf("%f", &preco2);
	
	printf("Digite o terceiro pre�o:\n");
	scanf("%f", &preco3);
	
	if(preco1<preco2 && preco1<preco3)
	{
		printf("O menor pre�o �: %.2f\n",preco1); //numero sem virgulo no resultado e so colocar %2.f
	
	}
	else
		if(preco2<preco1 && preco2<preco3)
		{
			printf("O menor pre�o �: %.2f\n",preco2); //numero sem virgulo no resultado e so colocar %2.f
		}
		
		else
			if(preco3<preco1 && preco3<preco2)
			{
				printf("O menor pre�o �: %.2f\n",preco3); //numero sem virgulo no resultado e so colocar %2.f
			}
}
