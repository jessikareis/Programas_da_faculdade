//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. 
//Calcule e mostre o total do seu sal�rio no referido m�s. 
//Data de cria��o:14/06/2020.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float valorhora, hora, bruto, renda, inss, sindicato, liquido;
	
	printf("Quanto vc recebe por hora? ");
	scanf("%f", &valorhora);
	printf("\nQuantas horas vc trabalha no m�s? ");
	scanf("%f", &hora);
	bruto=valorhora*hora;
	renda=0.11*bruto;
	inss=0.08*bruto;
	sindicato=0.05*bruto;
	liquido=bruto-renda-inss-sindicato;
	
	system("cls");
	printf("Sal�rio Bruto = R$%.2f.", bruto);
	printf("\nINSS = R$%.2f.", inss);
	printf("\nSindicato = R$%.2f.", sindicato);
	printf("\nImposto de renda = R$%.2f.", renda);
	printf("\n_________________________________");
	printf("\n+ Sal�rio bruto-----: R$%.2f.", bruto);
	printf("\n- Imposto de renda--: R$%.2f.", renda);
	printf("\n- INSS--------------: R$%.2f.", inss);
	printf("\n- sindicato---------: R$%.2f.", sindicato);
	printf("\n= Sal�rio l�quido---: R$%.2f.", liquido);	
	
	
}
