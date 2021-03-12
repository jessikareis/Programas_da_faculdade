/*Criador: J�ssika Reis de Mello.
Porva N1 - Prog II
Data de cria��o:29/09/2020.
Programa:1- Fa�a um programa em C para uma pizzaria delivery. (7,0)
O programa dever� obter o Telefone (com o DDD), Endere�o de entrega,
Sabor da pizza e o se deseja ou n�o o refrigerante. Para cada pedido,
o programa dever� calcular e exibir o valor a pagar com base na tabela
de pre�os abaixo. Ao final do expediente, o programa dever� exibir o
total de pedidos e o total do faturamento.
Muzzarela ? R$ 20,00
Portuguesa ? R$ 25,00
Camar�o ? R$ 35,00
Refrigerante ? R$ 5,00
O programa dever� obter os dados da seguinte forma:
Telefone com DDD (apenas n�meros):
Endere�o de Entrega:
Sabor da Pizza [Muzzarela, Portuguesa ou Camar�o]:
Refrigerante? [S/N]:
Obs1: O programa dever� ser finalizado ao digitar 0 (zero) no telefone.
Obs2: O programa dever� conter 2 fun��es: uma fun��o para calcular e
retornar o valor a pagar e outra para contabilizar a quantidade de
pedidos e o total do faturamento.
Obs3: O sabor da pizza dever� ser digitado, exemplo: �Muzzarela�. Favor
n�o troque a op��o da escolha do sabor por n�meros, exemplo:1-Muzzarela.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

	char endereco[100], sabor[15], refrigerante[3];
	float completo=0, x; 
	int tel, cont;

	float valor(char sabor[15], char refrigerante[3])
{
 float valor=0; 
	
	setlocale(LC_ALL, "portuguese");
	printf("\n******Pizzaria Delivery******");
 if(strcmp(sabor, "Muzzarela") == 0) 
 valor=valor+20;
 if(strcmp(sabor, "Portuguesa")==0) 
 valor=valor+25;
 if(strcmp(sabor, "Camar�o") == 0) 
 valor=valor+35;  
 if(strcmp(refrigerante, "Sim") == 0) 
 valor=valor+5;
	
 return valor;
   
}
void total 
(float valor)
{
 completo=completo+valor;
 cont++;
}

main()
{
 setlocale(LC_ALL, "portuguese");

 while(true)
 {
  system("cls");
  printf("\nInforme seu telefone com DDD: (0 para sair): ");
  scanf("%d", &tel);
  if(tel==0) break;
  else
  {
   printf("\nInforme seu endere�o? ");
   fflush(stdin);
   gets(endereco);   
   system("cls");
   printf("\n******CARD�PIO******");
   printf("\nMuzzarela");
   printf("\nPortuguesa");
   printf("\nCamar�o");
   printf("\n\nQual sabor escolhe? ");
   strupr(gets(sabor));
   printf("\nDeseja refrigerante? (sim ou nao): ");
   strupr(gets(refrigerante));
   x=valor(sabor,refrigerante);
   printf("\n O Valor: R$%.2f\n", x);
   total(x);
   system("pause");  
  }
 }
 system("cls");
 printf("\nQuantidade de pedidos: %i", cont);
 printf("\nValor total faturado: R$: %.2f", x);
}
