/*Prova N1
Autora: J�ssika Reis de Mello
Programa:Escreva um programa que pergunta um 
n�mero ao usu�rio, e mostra sua tabuada completa (de 1at� 10).
*/
#include<stdio.h>
#include<locale.h>
main()
{
	int n, x;
	x=1;
	setlocale(LC_ALL,"portuguese");
	printf("Informe um n�mero:");
	scanf("%d", &n);
	printf("\nTabuada do n�mero:%d \n", n);
	
	while(x<=10)
	{
		printf("%2d x %d = %3d \n", n,x, n*x);
		x++;
	}
}
