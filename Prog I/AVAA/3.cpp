/*Criador: J�ssika Reis de Mello.
Programa:Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.
Data de cria��o:30/06/2020.*/
#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	float lado, area;
	
	printf("Qual o comprimento do lado do quadrado? (Em cm)...: ");
	scanf("%f", &lado);
	area=lado*lado;

	printf("\n�rea = %.1f cm�", area);
	printf ("\nDobro da �rea = %.1f cm�.", area*2);
}
