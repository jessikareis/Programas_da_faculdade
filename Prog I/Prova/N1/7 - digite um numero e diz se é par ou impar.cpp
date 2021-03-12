/*Criadora: Jéssika Reis de Mello.
Programa:Faça um Programa que peça um número inteiro e determine se ele é par ou impar. Dica: utilize o operador módulo (resto da divisão) ex:: x % 2 == 0.
Data de criação:30/06/2020.*/
#include<stdio.h>
#include<locale.h>
main()
{
	int n;
	
	setlocale(LC_ALL, "portuguese");
	printf("Digite um número: ");
	scanf("%i", &n);
	if(n%2==0) 
	printf("\nO número digitado é par!");
	else 
	printf("\nO número digitado é ímpar!");
}
