/*Criador: J�ssika Reis de Mello.
Testa de Nivelamento Prog II
Programa:Fa�a  um programa em C para obter os sal�rios dos funcion�rios e ao final imprimir a
soma dos mesmos. O programa termina quando for digitado um sal�rio igual a 0.
Data de cria��o:23/08/2020.*/

#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

main()
{
	float sal, soma=0;
	int x=1;
	
	while(true)
	{
		setlocale(LC_ALL,"portuguese");
		printf("\nDigite o sal�rio ou digite 0 pra sair:");
		printf("\n\nDigite o %d� sal�rio: R$",x);
		fflush(stdin);	
		scanf("%f", &sal);
		printf("Soma dos sal�rios = R$%.2f", soma);
		if(sal==0) return 0;
		else 
		{
			soma=soma+sal;
			x++;
		}	
	}
}
