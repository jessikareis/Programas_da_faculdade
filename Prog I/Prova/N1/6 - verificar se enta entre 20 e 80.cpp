/*Criadora: Jéssika Reis de Mello.
Programa:Faça um programa que peça do usuário um número inteiro e verifique se está compreendido entre 20 e 80. Se tiver, imprimir “parabéns”, senão imprimir “deu ruim”.
Data de criação:30/06/2020.*/
#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	int n;
	printf("Digite um número: ");
	scanf("%i", &n);
	if(n>=20 && n<=80 ) 
	printf("\nParabéns!!!");
	else 
	printf("\nDeu ruim! :(");
}
