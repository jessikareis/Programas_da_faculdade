//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
//Calcule e mostre o total do seu salário no referido mês. 
//Data de criação:14/06/2020.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float valorhora, hora, bruto, renda, inss, sindicato, liquido;
	
	printf("Quanto vc recebe por hora? ");
	scanf("%f", &valorhora);
	printf("\nQuantas horas vc trabalha no mês? ");
	scanf("%f", &hora);
	bruto=valorhora*hora;
	renda=0.11*bruto;
	inss=0.08*bruto;
	sindicato=0.05*bruto;
	liquido=bruto-renda-inss-sindicato;
	
	system("cls");
	printf("Salário Bruto = R$%.2f.", bruto);
	printf("\nINSS = R$%.2f.", inss);
	printf("\nSindicato = R$%.2f.", sindicato);
	printf("\nImposto de renda = R$%.2f.", renda);
	printf("\n_________________________________");
	printf("\n+ Salário bruto-----: R$%.2f.", bruto);
	printf("\n- Imposto de renda--: R$%.2f.", renda);
	printf("\n- INSS--------------: R$%.2f.", inss);
	printf("\n- sindicato---------: R$%.2f.", sindicato);
	printf("\n= Salário líquido---: R$%.2f.", liquido);	
	
	
}
