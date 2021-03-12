/*Prova N1
Autora: Jéssika Reis de Mello
Programa:Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. 
O programa só deve terminar ao comando do usuário.
O usuário deve informar de qual numero ele deseja ver a tabuada.
Data: 19/06/2020*/
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
