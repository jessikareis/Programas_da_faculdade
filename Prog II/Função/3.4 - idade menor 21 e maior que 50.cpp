/*Criador: Jéssika Reis de Mello.
Lista 1
Programa:3.4) Solicitar a idade de várias pessoas e imprimir: Total de pessoas com menos de 21 
anos. Total de pessoas com mais de 50 anos. O programa termina quando idade for = 0.
Data de criação:14/09/2020.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int idade=0, menor, maior;
	
	setlocale(LC_ALL, "portuguese");
	printf("\n******Solicitação de idades******\n");
	
	while(idade=0)
	{
		printf("\nDigite a idade: ");
		fflush(stdin);
		scanf("%d", &idade);
		if(idade<21)
		{
			menor=menor+1;
		}
		if(idade>50)
		{
			maior=maior+1;
		}
		
		printf("\nTotal de pessoas com idade menor que 21anos: %d", menor);
		printf("\nTotal de pessoas com idade maior que 50anos: %d", maior);
		system("pause");
		return 0;
	}
}
