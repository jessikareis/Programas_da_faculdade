/*Criadora: J�ssika Reis de Mello.
Programa:Fa�a um programa que permita ao usu�rio fornecer dois n�meros, base e expoente, e calcule e mostre o primeiro n�mero elevado ao segundo n�mero.
N�o utilize a fun��o de pot�ncia da linguagem.
Data de cria��o:01/07/2020.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int potencia(int a,int b)
{	
	int resul=1;
	for(int pot=0;pot<b;pot++)
		resul=resul*a;				
	return resul;
}
main()	
{
	int x=0, y=0, w=0;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite a base: ");
	fflush(stdin);
	scanf("%i", &x);
	printf("Digite o expoente: ");
	fflush(stdin);
	scanf("%i", &y);
	w=potencia(x,y);
	printf("\n\n%i^%i=%i", x, y, w);		
}
