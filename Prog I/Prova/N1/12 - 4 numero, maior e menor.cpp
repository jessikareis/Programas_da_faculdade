/*Prova: N1
Autora: Jéssika Reis de Mello
QUESTÃO: Faça um Programa que leia quatro números e mostre o maior e o menor deles.
Data:19/06/2020*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	int n1, n2, n3, n4, maiorvalor, menorvalor;

	setlocale(LC_ALL,"portuguese");
	printf("Digite o primeiro número:\n");
	scanf("%d", &n1);

	printf("Digite o segundo número:\n");
	scanf("%d", &n2);

	printf("Digite o terceiro número:\n");
	scanf("%d", &n3);

	printf("Digite o quarto número:\n");
	scanf("%d", &n4);

	if(n1>n2 || n1>n3 && n1>n4) //para maior valor
	{
		maiorvalor=n1;
		}	
	else
		if(n2>n1 || n2>n3 && n2>n4)
		{
			maiorvalor=n2;
		}
	else
		if(n3>n1 || n3>n2 && n3>n4)
		{
			maiorvalor=n3;
		}
		else
		if(n4>n1 || n4>n2 && n4>n3)
		{
			maiorvalor=n4;
		}
	printf("O maior valor é:%d\n", maiorvalor);

	if(n1<n2 || n1<n3 && n1<n4) //para menor valor
	{
		menorvalor=n1;
	}
	else
		if (n2<n1 || n2<n3 && n2<n4)
		{
			menorvalor=n2;
		}
	else
		if (n3<n1 || n3<n2 && n3<n4)
		{
			menorvalor=n3;
		}
	else
		if(n4<n1 || n4<n2 && n4<n3)
		{
			menorvalor=n4;
		}
	printf("O menor valor é: %d\n", menorvalor);
}
