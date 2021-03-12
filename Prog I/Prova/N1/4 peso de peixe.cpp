/*Criador: Jéssika Reis de Mello.
Programa: João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. 
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (350 quilos) deve pagar uma multa de R$ 2,50 por quilo 
excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além 
do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.
Para se resolver a situação de multa negativa, informar através de print para desconsiderar se a multa for negativa.
OBS - Não pode ser usado comandos de condição.
Data de criação:30/06/2020.*/
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
