/*Criador: Jéssika Reis de Mello.
Testa de Nivelamento Prog II
Programa:Faça  um programa em C para obter os salários dos funcionários e ao final imprimir a
soma dos mesmos. O programa termina quando for digitado um salário igual a 0.
Data de criação:23/08/2020.*/

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
		printf("\nDigite o salário ou digite 0 pra sair:");
		printf("\n\nDigite o %dº salário: R$",x);
		fflush(stdin);	
		scanf("%f", &sal);
		printf("Soma dos salários = R$%.2f", soma);
		if(sal==0) return 0;
		else 
		{
			soma=soma+sal;
			x++;
		}	
	}
}
