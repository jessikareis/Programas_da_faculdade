/*Criadora: J�ssika Reis de Mello
Programa: Realizar as seguintes modifica��es
1) Controlar a entrada de c�digos dos projetos (testar se esta dentro da faixa)
2) Em opera��es de D (despesa), n�o deixar realizar se o projeto n�o tiver saldo
3) Incluir um contador de opera��es de R e D na estrutura do projeto
Data de cria��o: 30/06/2020*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
int i=0, cod;

struct
 {	 
 	float sal;
	int  d, r;
  	float valor;
  	char modo;
 }boleto[10]={};
	
while(1==1)
{
	system("cls");
	setlocale(LC_ALL, "portuguese");	
	printf("\n******Saldos!******\n\n");
	for(int cod=0; cod<10; cod++) 
	printf("Projeto %3d: R$ %.2f\n", cod+1,boleto[cod].sal);
	printf("\n--------CONTROLE DE PROJETOS-----------\n");
	printf("\nDigite o c�digo do projeto entre (0..9) ou (-1) Para Terminar: ");		
	scanf("%d", &cod);
	cod--;
	if(cod==-2) break;
	if(cod<1 || cod>10) 
	{
		printf("\nValor inv�lido, favor tentar novamente!! :(\n\n");
		system("pause");
	}
	else
	{
		printf("\nDigite a opera��o: ");
		getchar();
 		scanf("%f", &boleto[cod].valor);
 		while(2==2)
 		{
		printf("\n\nDigite o tipo de transa��o (R = Receita ou D = Despesa): ");
		getchar();
		scanf("%c", &boleto[cod].modo);
		if (boleto[cod].modo == 'R' || boleto[cod].modo == 'r') 
	    {
	  boleto[cod].sal = boleto[cod].sal + boleto[cod].valor;
	  boleto[cod].r++;
	  break;
		}					
		else
		{					
		if (boleto[cod].modo == 'D' || boleto[cod].modo == 'd') 
		{
		if(boleto[cod].valor> boleto[cod].sal)
		{
		printf("\nNegado por falta de saldo.");
		printf("\nSaldo do projeto = R$%.2f \n\n", boleto[cod].sal);
		system("pause");
		break;
		}
		else 
		{
		boleto[cod].sal= boleto[cod].sal - boleto[cod].valor;
		boleto[cod].d++;								
		break;
		}
				    
	} 	
	  	else 
	  	{
		printf("\nTipo Inv�lido!!! Tente de novo.\n\n");
				  		
		system("pause");  	
		break;
		}
						 	
	}
	}
	}
	
}
	system("cls");
	printf("\n\tSaldos:\t\t(Despesas e Receitas:)\n\n");
	 for(int cod=0; cod<10; cod++) 
	 printf("Projeto %3d: R$ %.2f\t\t(%d,%d)\n", cod+1,boleto[cod].sal, boleto[cod].d, boleto[cod].r);
}
