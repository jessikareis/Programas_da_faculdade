/*Criadora: J�ssika Reis de Mello.
Programa:Fa�a um Programa que pe�a um n�mero inteiro e determine se ele � par ou impar. Dica: utilize o operador m�dulo (resto da divis�o) ex:: x % 2 == 0.
Data de cria��o:30/06/2020.*/
#include<stdio.h>
#include<locale.h>
main()
{
	int n;
	
	setlocale(LC_ALL, "portuguese");
	printf("Digite um n�mero: ");
	scanf("%i", &n);
	if(n%2==0) 
	printf("\nO n�mero digitado � par!");
	else 
	printf("\nO n�mero digitado � �mpar!");
}
