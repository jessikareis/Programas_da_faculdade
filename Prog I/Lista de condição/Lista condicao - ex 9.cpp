//9. Fa�a um programa para o c�lculo de uma folha de pagamento, sabendo que os 
//descontos s�o do Imposto de Renda, que depende do sal�rio bruto (conforme tabela 
//abaixo) e 3% para o Sindicato e que o FGTS corresponde a 11% do Sal�rio Bruto, 
//mas n�o � descontado (� a empresa que deposita). O Sal�rio L�quido corresponde ao 
//Sal�rio Bruto menos os descontos. O programa dever� pedir ao usu�rio o valor da 
//sua hora e a quantidade de horas trabalhadas no m�s.
//o Desconto do IR:
//o Sal�rio Bruto at� 900 (inclusive) - isento
//o Sal�rio Bruto at� 1500 (inclusive) - desconto de 5%
//o Sal�rio Bruto at� 2500 (inclusive) - desconto de 10%
//o Sal�rio Bruto acima de 2500 - desconto de 20% Imprima na tela as informa��es


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
	
	printf("Digite a quantidade de hora trabalhada no m�s:");
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
	
	printf("\nSal�rio bruto (%4.2f * %4.2f): R$%4.2f\n", vh, qh, salbru);
	printf("IR (%i%%): R$%4.2f\n", irr, ir);
	printf("INSS(10%%): R$%4.2f\n", inss);
	printf("FGTS (11%%): R$%.2f\n", fgts);
	printf("Total de desconto: R$%.2f\n", desconto);
	printf("Sal�rio Liquido: R$%4.2f\n", salliqui);
}
