/*Prova N1
Autora: Jéssika Reis de Mello
Programa:Escreva um programa que pergunta um 
número ao usuário, e mostra sua tabuada completa (de 1até 10).
*/
#include<stdio.h>
#include<locale.h>
main()
{
	int n, x;
	x=1;
	setlocale(LC_ALL,"portuguese");
	printf("Informe um número:");
	scanf("%d", &n);
	printf("\nTabuada do número:%d \n", n);
	
	while(x<=10)
	{
		printf("%2d x %d = %3d \n", n,x, n*x);
		x++;
	}
}
