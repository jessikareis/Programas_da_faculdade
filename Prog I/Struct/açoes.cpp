/*Criadora:Jéssika Reis de Mello
Programa: 1 – Crie uma struct para controlar ações de uma bolsa de valores com as seguintes informações:
• Nome da companhia
• Área de atuação da companhia
• Valor atual da ação (em reais)
• Valor anterior
• Variação da ação em porcentagem (double), ou seja, quanto a ação cresceu ou caiu desde a abertura da bolsa no dia.
2- Faça um programa que:
a) Preencha os campos da struct do exercício anterior
b) Imprima os campos da struct do exercício anterior
c) Com um laço, preencha 3 structs (vetor de structs)
3 - Faça um programa que, dado um valor da ação pelo usuário, imprima as informações das ações cujo os valores estão abaixo do valor informado.
4 – Faça um programa que exibe a média e o desvio padrão dos valores de todas as ações.

Data de criação:26/06/2020.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main()
{
	struct{
	char nome[80], area[90];
	float vatual, vant;
	int pcent;
		
	}bag[3];
	
	float  variacao[3], media=0, z, t=0;
	int comp=3, x=0, y=0, c=0, w=0;
	
	for(int q=0;q<comp;q++)
	{
		setlocale(LC_ALL, "portuguese");
		printf("Nome da %iº Companhia: ", q+1);
		fflush(stdin);
		gets(bag[q].nome);
		
		printf("\nÁrea de atuação da '%s': ", bag[q].nome);
		fflush(stdin);		
		gets(bag[q].area);
		
		printf("\nValor atual da ação: R$");
		fflush(stdin);
		scanf("%f", &bag[q].vatual);
		
		printf("\nValor anterior da Companhia: R$");
		fflush(stdin);
		scanf("%f", &bag[q].vant);
		
		variacao[q]=bag[q].vatual-bag[q].vant;
		bag[q].pcent=variacao[q]*100/bag[q].vant;
		media=media+bag[q].vatual;
		
		system("cls");
	}
	media=media/comp;
	for(int q=0; q<comp; q++)
	{
	t=t+pow(bag[q].vatual-media,2);
	}
	t=sqrt(t/(comp-1));	
	for(int q=0; q<comp; q++)
	{	
	printf("\n______________________");
	printf("\n\t\tCompanhia %i ", q+1);
	printf("\n\nNome: %s", bag[q].nome);
	printf("\nÁrea de atuação: %s", bag[q].area);
	printf("\nValor atual: R$%.2f", bag[q].vatual);
	printf("\nValor anterior: R$%.2f", bag[q].vant);
	printf("\nVariação da ação em porcentagem: %i%%\n", bag[q].pcent);	
	}
	printf("\n__________________________");
	printf("\n\nMédia das Companhias = %.2f", media);	
	printf("\nDesvio padrão das Companhias: = %.2f", t);
	printf("\n\n");
	system("pause");	
	do
	{
		x=0;
		system("cls");
		printf("Pesquisar Companhias com valor abaixo ou igual a: ");
		fflush(stdin);
		scanf("%f", &z);
		system("cls");
		for(int q=0; q<comp; q++)
		{	
			if(bag[q].vatual<=z)
			{							
				printf("\n_______________________");		
				printf("\nNome: %s", bag[q].nome);
				printf("\nÁrea de atuação: %s", bag[q].area);
				printf("\nValor atual: R$%.2f", bag[q].vatual);
				printf("\nValor anterior: R$%.2f", bag[q].vant);
				printf("\nVariação: %i%%\n", bag[q].pcent);						
				y++;
			}
		}	
		
		if(y==0)
		{
		system("cls");
		printf("Não foi encontrado nenhum valor.\n");
		} 
		printf("\n______________________");
		 do
		 {
		c=0;
		printf("\n(1)-Pesquisar novamente\n(2)-Sair\n");
		fflush(stdin);
		scanf("%i", &w);
			
		if(w==2) 
		{
		c++;
		x++;
		}
		if(w==1) 
		c++;

		}
		while(c==0);
		 
	}while(x==0);
}
