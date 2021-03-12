/*Criador: Jéssika Reis de Mello.
Programa: Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, 
sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
salário bruto.
quanto pagou ao INSS.
quanto pagou ao sindicato.
salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:
+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.
OBS - Não pode ser usado comandos de condição.
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
	printf("\nQuantas horas trabalhou nesse mês? ");
	scanf("%f", &hr);
	bruto=vhr*hr;
	renda=0.11*bruto;
	inss=0.08*bruto;
	sind=0.05*bruto;
	liq=bruto-renda-inss-sind;
	
	printf("Salário Bruto = R$%.2f.", bruto);
	printf("\nINSS = R$%.2f.", inss);
	printf("\nSindicato = R$%.2f.", sind);
	printf("\nImposto de renda = R$%.2f.", renda);
	printf("\n_________________________________");
	printf("\n\n****Detalhamento sobre seu salário:****");
	printf("\n\n+ Salário bruto-----: R$%.2f.", bruto);
	printf("\n- Imposto de renda--: R$%.2f.", renda);
	printf("\n- INSS--------------: R$%.2f.", inss);
	printf("\n- sindicato---------: R$%.2f.", sind);
	printf("\n= Salário líquido---: R$%.2f.", liq);	
}
