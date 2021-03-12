/*Criador: Jéssika Reis de Mello.
Programa: Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo,
a soma do triplo do primeiro com o terceiro e o terceiro elevado ao cubo.
Data de criação:30/06/2020.*/
#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	int num1, num2;
	float num3, n1, n2, n3;
	
	printf("Digite um número inteiro: ");
	scanf("%i",&num1);
	
	printf("\nDigite um segundo número inteiro: ");
	scanf("%i",&num2);
	
	printf("\nDigite um número REAL: ");
	scanf("%f",&num3);
	
	n1=pow(num1,2)*num2/2;
	n2=(num1*3)+num3;
	n3=pow(num3,3);
	
	printf("%.2f", n1);
	printf("\n%.2f", n2);
	printf("\n%.2f", n3);
}
