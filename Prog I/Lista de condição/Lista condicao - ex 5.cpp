//5. Faça um Programa que leia três números e mostre o maior e o menor deles.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main()
{
	int n1, n2, n3, maiorvalor, menorvalor;
	
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
	
	
	if(n1<<n2 && n1<n3) //para menor valor
	{
		menorvalor=n1;
	}
	else
		if (n2<n1 && n2<n3)
		{
			menorvalor=n2;
		}
		else
		{
			menorvalor=n3;
		}
	printf("O menor valor e: %d\n", menorvalor);
}
