/*Criador: Jéssika Reis de Mello.
Lista 1
Programa: 3- REPETIÇÃO
3.2) Obter os salários dos funcionários e ao final imprimir a soma dos mesmos. 
O programa termina quando for digitado um salário igual a 0.
Data de criação:01/09/2020.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	int x=1;
	float salario, total;
	
	setlocale(LC_ALL,"portuguese");
	printf("\n******Soma dos salários******\n");
	
	do
	{
		printf("Digite o salário do %d funcionário: R$", x);
		scanf("%f", &salario);
		
		total=total+salario;
		x++;
	}
	while(salario!=0);
	printf("\n****O salário total dos funcionários foi: R$ %2.f****", total);
}
