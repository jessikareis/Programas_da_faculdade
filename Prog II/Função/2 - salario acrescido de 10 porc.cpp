/*
Criadora: J�ssika Reis de Mello
Data: 14/09/2020
2) Fa�a um programa em C para obter o nome e o sal�rio de um funcion�rio. Ao final,
calcule e imprima o sal�rio obtido acrescido de 10%.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	float salario, nome, total;
	
	setlocale(LC_ALL,"portuguese");
	printf("Nome do funcion�rio ?");
		fflush(stdin);
	scanf("%f", &nome);
	printf("Quanto � seu sal�rio? ");
		fflush(stdin);
	scanf("%f", &salario);
	

	total=0.10*salario;
	
	
	printf("\n\nSal�rio total = R$%.2f.", total+salario);

}
