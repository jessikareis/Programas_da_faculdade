/*Vetor
2)Preencher um vetor com os n�meros pares do n�mero 2 a 20. 

Criadora: J�ssika Reis de Mello*/

#include<stdio.h>
#include<locale.h>
main()

{
	int x=2, i=0;
	int p[20];
	
	while (x<=20)
	{
		if (x%2==0)
		{
			i++;
			p[i]=x;	
			setlocale(LC_ALL,"portuguese");
			printf("Vetores pares de 2 � 20:");
			printf("%i \t \n", p[i]);													
		}		
	x++;	
	}
 }
	
