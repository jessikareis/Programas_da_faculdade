//8. As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contraram para desenvolver o programa que calculará os reajustes.
//o Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
//o salários até R$ 280,00 (incluindo) : aumento de 20%
//o salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
//o salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
//o salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
//o o salário antes do reajuste;
//o o percentual de aumento aplicado;
//o o valor do aumento;
//o o novo salário, após o aumento.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{
	float salario=0, aumento=0;

	while(1){
		
	setlocale(LC_ALL,"portuguese");
	printf("Informe o salário do colaborador:");
	scanf("%f",&salario);
	
	if(salario<=280)
	{
		aumento=salario*0.20;
		printf("\nO salário antes do reajuste: %4.2f\n",salario);
		printf("O percentual de aumento aplicado: 20\n");
		printf("O valor do aumento é: %4.2f\n", salario*0.20);
		printf("O salário corrigido após o aumento é: %4.2f\n\n", salario+aumento);
	}
	 	if(salario>281 && salario<=700)
			{
			aumento=salario*0.15;
			printf("\nO salário antes do reajuste:%4.2f\n",salario);
			printf("O percentual de aumento aplicado: 15\n");
			printf("O valor do aumento é: %4.2f\n", salario*0.15);
			printf("O salário corrigido após o aumento é: %4.2f\n\n", salario+aumento);
	 }
		if(salario>701 && salario<=1500)
			{
			aumento=salario*0.10;
			printf("\nO salário antes do reajuste:%4.2f\n",salario);
			printf("O percentual de aumento aplicado: 10\n");
			printf("O valor do aumento é: %4.2f\n", salario*0.10);
			printf("O salário corrigido após o aumento é: %4.2f\n\n", salario+aumento);
	}
		if(salario>1501)
			{
			aumento=salario*0.05;
			printf("\nO salário antes do reajuste:%4.2f\n",salario);
			printf("O percentual de aumento aplicado: 5\n");
			printf("O valor do aumento é: %4.2f\n", salario*0.05);
			printf("O salário corrigido após o aumento é: %4.2f\n\n", salario+aumento);
		}
	}
system("pause");

}
