/*Autora: J�ssika Reis de Mello
Programa:Escreva um programa em C que solicita 10 n�meros ao usu�rio, 
atrav�s de um la�o while, e ao final mostre qual destes n�meros � o menor.
*/
#include<stdio.h>
#include<locale.h>
main()
{
	int n, x=1, menor=100000;
	
	while(x<=10)
	{
		setlocale(LC_ALL,"portuguese");
		printf("Digite o n�mero %d: ", x);
		scanf("%d", &n);
		
		if (n<menor)
			menor=n;
			x++;
	}
	printf("O menor n�mero � o: %d",menor);
}
