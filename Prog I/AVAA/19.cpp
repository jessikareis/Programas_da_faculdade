//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Faça um programa que permita ao usuário fornecer dois números, base e expoente
//, e calcule e mostre o primeiro número elevado ao segundo número.
//Data de criação:17/06/2020.
#include<stdio.h>
#include<stdlib.h>

int potencia(int a,int b)
{	
	int total=1;
	for(int p=0;p<b;p++)
		total=total*a;				
	return total;
}
main()	
{
	int x=0, y=0, xy=0;
	
	printf("Escolha a base: ");
	fflush(stdin);
	scanf("%i", &x);
	printf("Escolha o expoente: ");
	fflush(stdin);
	scanf("%i", &y);
	xy=potencia(x,y);
	printf("\n\n%i^%i=%i", x, y, xy);		
}
