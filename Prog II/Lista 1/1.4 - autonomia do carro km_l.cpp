/*Criador: J�ssika Reis de Mello.
Lista 1
Programa:4) Fa�a um programa em C para calcular a autonomia (km/L de gasolina) 
numa viagem de autom�vel.
Data de cria��o:31/08/2020.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main()
{
	
float km, lit, gasto;

setlocale(LC_ALL,"portuguese");

printf("******Calcular a autonomia do autom�vel em uma viagem******");
printf("\n\nQual a dist�ncia percorrida em km? ");
scanf("%f", &km);

printf("\nQuanto de gasolina foi gasto em litros: ");
scanf("%f", &lit);

gasto = km/lit;

printf("\nA autonomia do autom�vel �: %.3f km/l de gasolina", gasto);
}
