/*Prova N1
Autora: J�ssika Reis de Mello
Programa:Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer n�mero inteiro entre 1 a 10. 
O programa s� deve terminar ao comando do usu�rio.
O usu�rio deve informar de qual numero ele deseja ver a tabuada.
Data: 19/06/2020*/
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
