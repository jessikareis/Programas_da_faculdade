/*Criadora: J�ssika Reis de Mello.
Programa:Fa�a um programa que pe�a do usu�rio um n�mero inteiro e verifique se est� compreendido entre 20 e 80. Se tiver, imprimir �parab�ns�, sen�o imprimir �deu ruim�.
Data de cria��o:30/06/2020.*/
#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	int n;
	printf("Digite um n�mero: ");
	scanf("%i", &n);
	if(n>=20 && n<=80 ) 
	printf("\nParab�ns!!!");
	else 
	printf("\nDeu ruim! :(");
}
