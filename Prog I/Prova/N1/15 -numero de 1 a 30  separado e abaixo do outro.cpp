/*Criadora: J�ssika Reis de Mello.
Programa:Fa�a um programa que imprima na tela os n�meros de 1 a 30, um ao lado do outro separados por v�rgula e a seguir um abaixo do outro.
Data de cria��o:01/07/2020.*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int x;
	
	for(x=1;x<=30;x++)
	{
		printf("%i",x);
		if(x<30) 
		printf(", ");
		
		if(x==30)
		printf(".\n\n");
	}
	for(x=1;x<=30;x++)	
	{
		printf("%i\n", x);
	}
}

