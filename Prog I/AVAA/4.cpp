//Criador: Matheus Muniz Vantil Da Costa.
//Programa: Jo�o precisa que voc� fa�a um programa que leia a vari�vel peso (peso de peixes)
// e calcule o excesso. Gravar na vari�vel excesso a quantidade de quilos al�m do limite 
//e na vari�vel multa o valor da multa que Jo�o dever� pagar. Imprima os dados do programa com as mensagens adequadas.
//Data de cria��o:13/06/2020.
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
