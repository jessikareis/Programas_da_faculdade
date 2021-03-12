//1. Faça um Programa que peça dois números e imprima o maior deles.

#include<stdio.h>
main()

{
	int n1, n2;
		printf(" Digite o primeiro numero: ");
		
		scanf("%d",& n1);
		printf("Digite o segundo numero:");
		scanf("%d", & n2);
	if (n1>n2)
		printf("O numero %d é maior", n1);
	else 
	
	if (n2>n1)
		printf("O %d é maior", n2);
else
printf("são iguais");	
}
