/*Criadora: Jéssika Reis de Mello.
Programa:Faça um programa que permita ao usuário fornecer dois números, base e expoente, e calcule e mostre o primeiro número elevado ao segundo número.
Não utilize a função de potência da linguagem.
Data de criação:01/07/2020.*/
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
