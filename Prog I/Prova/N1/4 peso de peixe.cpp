/*Criador: J�ssika Reis de Mello.
Programa: Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento di�rio de seu trabalho. 
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo (350 quilos) deve pagar uma multa de R$ 2,50 por quilo 
excedente. Jo�o precisa que voc� fa�a um programa que leia a vari�vel peso (peso de peixes) e calcule o excesso. Gravar na vari�vel excesso a quantidade de quilos al�m 
do limite e na vari�vel multa o valor da multa que Jo�o dever� pagar. Imprima os dados do programa com as mensagens adequadas.
Para se resolver a situa��o de multa negativa, informar atrav�s de print para desconsiderar se a multa for negativa.
OBS - N�o pode ser usado comandos de condi��o.
Data de cria��o:30/06/2020.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	float peso, pesomaior, multa;
	
	printf("Quanto o peixe pesa? ");
	scanf("%f", &peso);
	pesomaior=peso-350;
	multa=pesomaior*2.50;

	printf("\nDevera pagar a multa de = R$%.2f.", multa);
	printf("\n\n*******Caso a multa seja negativa, favor desconsiderar.*********");
}
