//8. As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus colaboradores e lhe contraram para desenvolver o programa que calcular� os reajustes.
//o Fa�a um programa que recebe o sal�rio de um colaborador e o reajuste segundo o seguinte crit�rio, baseado no sal�rio atual:
//o sal�rios at� R$ 280,00 (incluindo) : aumento de 20%
//o sal�rios entre R$ 280,00 e R$ 700,00 : aumento de 15%
//o sal�rios entre R$ 700,00 e R$ 1500,00 : aumento de 10%
//o sal�rios de R$ 1500,00 em diante : aumento de 5% Ap�s o aumento ser realizado, informe na tela:
//o o sal�rio antes do reajuste;
//o o percentual de aumento aplicado;
//o o valor do aumento;
//o o novo sal�rio, ap�s o aumento.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{
	float salario=0, aumento=0;

	while(1){
		
	setlocale(LC_ALL,"portuguese");
	printf("Informe o sal�rio do colaborador:");
	scanf("%f",&salario);
	
	if(salario<=280)
	{
		aumento=salario*0.20;
		printf("\nO sal�rio antes do reajuste: %4.2f\n",salario);
		printf("O percentual de aumento aplicado: 20\n");
		printf("O valor do aumento �: %4.2f\n", salario*0.20);
		printf("O sal�rio corrigido ap�s o aumento �: %4.2f\n\n", salario+aumento);
	}
	 	if(salario>281 && salario<=700)
			{
			aumento=salario*0.15;
			printf("\nO sal�rio antes do reajuste:%4.2f\n",salario);
			printf("O percentual de aumento aplicado: 15\n");
			printf("O valor do aumento �: %4.2f\n", salario*0.15);
			printf("O sal�rio corrigido ap�s o aumento �: %4.2f\n\n", salario+aumento);
	 }
		if(salario>701 && salario<=1500)
			{
			aumento=salario*0.10;
			printf("\nO sal�rio antes do reajuste:%4.2f\n",salario);
			printf("O percentual de aumento aplicado: 10\n");
			printf("O valor do aumento �: %4.2f\n", salario*0.10);
			printf("O sal�rio corrigido ap�s o aumento �: %4.2f\n\n", salario+aumento);
	}
		if(salario>1501)
			{
			aumento=salario*0.05;
			printf("\nO sal�rio antes do reajuste:%4.2f\n",salario);
			printf("O percentual de aumento aplicado: 5\n");
			printf("O valor do aumento �: %4.2f\n", salario*0.05);
			printf("O sal�rio corrigido ap�s o aumento �: %4.2f\n\n", salario+aumento);
		}
	}
system("pause");

}
