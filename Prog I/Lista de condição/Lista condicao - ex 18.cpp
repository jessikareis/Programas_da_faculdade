/*18. Fa�a um Programa que pe�a um n�mero inteiro e determine se ele � par ou impar. 
Dica: utilize o operador m�dulo (resto da divis�o) ex:: x % 2 == 0.*/

#include<locale.h>
#include<stdio.h>
main()
{
	int n, resto;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite um n�mero inteiro:");
	scanf("%i", &n);
	resto=n%2;
	
	if(resto==0)
		printf("\n%i � par!", n);
		
		else
			printf("\n%i � �mpar!",n);
}
