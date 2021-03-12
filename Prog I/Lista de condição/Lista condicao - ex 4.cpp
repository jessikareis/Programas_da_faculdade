//4. Faça um Programa que leia três números e mostre o maior deles.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main()
{
	int n1, n2, n3, maiorvalor;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero:\n");
	scanf("%d", &n2);
	
	printf("Digite o terceiro numero:\n");
	scanf("%d", &n3);
	
	if(n1>n2 && n1>n3) //para maior valor
	{
		maiorvalor=n1;
		}	
	else
		if(n2>n1 && n2>n3)
		{
			maiorvalor=n2;
		}
		else
		{
			maiorvalor=n3;
		}
	printf("O maior valor e:%d\n", maiorvalor);
}
