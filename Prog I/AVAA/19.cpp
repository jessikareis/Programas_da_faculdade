//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Fa�a um programa que permita ao usu�rio fornecer dois n�meros, base e expoente
//, e calcule e mostre o primeiro n�mero elevado ao segundo n�mero.
//Data de cria��o:17/06/2020.
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
