/*Criador: J�ssika Reis de Mello.
Lista 1
Programa: 3- REPETI��O
3.2) Obter os sal�rios dos funcion�rios e ao final imprimir a soma dos mesmos. 
O programa termina quando for digitado um sal�rio igual a 0.
Data de cria��o:01/09/2020.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	int x=1;
	float salario, total;
	
	setlocale(LC_ALL,"portuguese");
	printf("\n******Soma dos sal�rios******\n");
	
	do
	{
		printf("Digite o sal�rio do %d funcion�rio: R$", x);
		scanf("%f", &salario);
		
		total=total+salario;
		x++;
	}
	while(salario!=0);
	printf("\n****O sal�rio total dos funcion�rios foi: R$ %2.f****", total);
}
