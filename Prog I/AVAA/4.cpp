//Criador: Matheus Muniz Vantil Da Costa.
//Programa: João precisa que você faça um programa que leia a variável peso (peso de peixes)
// e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite 
//e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.
//Data de criação:13/06/2020.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	float peso, excesso, multa;
	
	printf("Qual o peso do peixe? ");
	scanf("%f", &peso);
	excesso=peso-350;
	multa=excesso*2.50;
	system("cls");
	printf("Caso a multa seja negativa, DESCONSIDERE.");
	printf("\nMulta = R$%.2f.", multa);
	
	
}
