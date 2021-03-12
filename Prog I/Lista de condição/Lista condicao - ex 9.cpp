//9. Faça um programa para o cálculo de uma folha de pagamento, sabendo que os 
//descontos são do Imposto de Renda, que depende do salário bruto (conforme tabela 
//abaixo) e 3% para o Sindicato e que o FGTS corresponde a 11% do Salário Bruto, 
//mas não é descontado (é a empresa que deposita). O Salário Líquido corresponde ao 
//Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da 
//sua hora e a quantidade de horas trabalhadas no mês.
//o Desconto do IR:
//o Salário Bruto até 900 (inclusive) - isento
//o Salário Bruto até 1500 (inclusive) - desconto de 5%
//o Salário Bruto até 2500 (inclusive) - desconto de 10%
//o Salário Bruto acima de 2500 - desconto de 20% Imprima na tela as informações


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main()
{
	float vh=0, qh=0, salbru, desconto, fgts, inss, ir, salliqui, descsindi;
	int irr;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite o valor da hora de trabalho:");
	scanf("%f", &vh);
	
	printf("Digite a quantidade de hora trabalhada no mês:");
	scanf("%f", &qh);
	
	salbru=(vh*qh);
	ir=0.05;
	inss=salbru*0.1;	
	
	
	if(salbru<=900)
	{
		ir=0;
		irr=0;
	
	}
	
	if(salbru>901 && salbru<=1500)
	{
		irr=5;
		ir=(salbru/100)*5;
		
	}
	
	if(salbru>1501 && salbru<=2500)
	{
		irr=10;
		ir=(salbru/100)*10;
		
	}
	
	if(salbru>2501)
	{
		irr=20;
		ir=(salbru/100)*20;
		
	}
	
	fgts=(salbru*11)/100;
	desconto=ir+inss;
	salliqui=salbru-desconto;
	
	printf("\nSalário bruto (%4.2f * %4.2f): R$%4.2f\n", vh, qh, salbru);
	printf("IR (%i%%): R$%4.2f\n", irr, ir);
	printf("INSS(10%%): R$%4.2f\n", inss);
	printf("FGTS (11%%): R$%.2f\n", fgts);
	printf("Total de desconto: R$%.2f\n", desconto);
	printf("Salário Liquido: R$%4.2f\n", salliqui);
}
