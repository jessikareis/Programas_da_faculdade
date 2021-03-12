/*
Criadora: Jéssika Reis de Mello
Data: 14/09/2020
2) Faça um programa em C para obter o nome e o salário de um funcionário. Ao final,
calcule e imprima o salário obtido acrescido de 10%.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	float salario, nome, total;
	
	setlocale(LC_ALL,"portuguese");
	printf("Nome do funcionário ?");
		fflush(stdin);
	scanf("%f", &nome);
	printf("Quanto é seu salário? ");
		fflush(stdin);
	scanf("%f", &salario);
	

	total=0.10*salario;
	
	
	printf("\n\nSalário total = R$%.2f.", total+salario);

}
