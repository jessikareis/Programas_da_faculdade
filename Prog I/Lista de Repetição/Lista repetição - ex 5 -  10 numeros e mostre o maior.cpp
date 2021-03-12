/*Autora: Jéssika Reis de Mello
Programa:Escreva um programa em C que solicita 10 números ao usuário, 
através de um laço while, e ao final mostre qual destes números é o maior.
*/
#include<stdio.h>
#include<locale.h>
main()
{
	int n, x=1, maior;
	
	while(x<=10)
	{
		setlocale(LC_ALL,"portuguese");
		printf("Digite o número %d: ", x);
		scanf("%d", &n);
		
		if (n>maior)
			maior=n;
			x++;
	}
	printf("O maior número é o: %d",maior);
}
