/*18. Faça um Programa que peça um número inteiro e determine se ele é par ou impar. 
Dica: utilize o operador módulo (resto da divisão) ex:: x % 2 == 0.*/

#include<locale.h>
#include<stdio.h>
main()
{
	int n, resto;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite um número inteiro:");
	scanf("%i", &n);
	resto=n%2;
	
	if(resto==0)
		printf("\n%i é par!", n);
		
		else
			printf("\n%i é ímpar!",n);
}
