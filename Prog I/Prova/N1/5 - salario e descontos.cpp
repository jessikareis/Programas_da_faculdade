/*Criador: J�ssika Reis de Mello.
Programa: Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s, 
sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, fa�a um programa que nos d�:
sal�rio bruto.
quanto pagou ao INSS.
quanto pagou ao sindicato.
sal�rio l�quido.
calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:
+ Sal�rio Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Sal�rio Liquido : R$
Obs.: Sal�rio Bruto - Descontos = Sal�rio L�quido.
OBS - N�o pode ser usado comandos de condi��o.
Data: 30/06/2020*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	float vhr, hr, inss, renda, bruto, sind, liq;
	
	printf("Quanto recebe por hora? ");
	scanf("%f", &vhr);
	printf("\nQuantas horas trabalhou nesse m�s? ");
	scanf("%f", &hr);
	bruto=vhr*hr;
	renda=0.11*bruto;
	inss=0.08*bruto;
	sind=0.05*bruto;
	liq=bruto-renda-inss-sind;
	
	printf("Sal�rio Bruto = R$%.2f.", bruto);
	printf("\nINSS = R$%.2f.", inss);
	printf("\nSindicato = R$%.2f.", sind);
	printf("\nImposto de renda = R$%.2f.", renda);
	printf("\n_________________________________");
	printf("\n\n****Detalhamento sobre seu sal�rio:****");
	printf("\n\n+ Sal�rio bruto-----: R$%.2f.", bruto);
	printf("\n- Imposto de renda--: R$%.2f.", renda);
	printf("\n- INSS--------------: R$%.2f.", inss);
	printf("\n- sindicato---------: R$%.2f.", sind);
	printf("\n= Sal�rio l�quido---: R$%.2f.", liq);	
}
