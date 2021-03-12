/*Criador: Jéssika Reis de Mello.
Porva N1 - Prog II
Data de criação:29/09/2020.
Programa:1- Faça um programa em C para uma pizzaria delivery. (7,0)
O programa deverá obter o Telefone (com o DDD), Endereço de entrega,
Sabor da pizza e o se deseja ou não o refrigerante. Para cada pedido,
o programa deverá calcular e exibir o valor a pagar com base na tabela
de preços abaixo. Ao final do expediente, o programa deverá exibir o
total de pedidos e o total do faturamento.
Muzzarela ? R$ 20,00
Portuguesa ? R$ 25,00
Camarão ? R$ 35,00
Refrigerante ? R$ 5,00
O programa deverá obter os dados da seguinte forma:
Telefone com DDD (apenas números):
Endereço de Entrega:
Sabor da Pizza [Muzzarela, Portuguesa ou Camarão]:
Refrigerante? [S/N]:
Obs1: O programa deverá ser finalizado ao digitar 0 (zero) no telefone.
Obs2: O programa deverá conter 2 funções: uma função para calcular e
retornar o valor a pagar e outra para contabilizar a quantidade de
pedidos e o total do faturamento.
Obs3: O sabor da pizza deverá ser digitado, exemplo: “Muzzarela”. Favor
não troque a opção da escolha do sabor por números, exemplo:1-Muzzarela.*/

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
 if(strcmp(sabor, "Camarão") == 0) 
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
   printf("\nInforme seu endereço? ");
   fflush(stdin);
   gets(endereco);   
   system("cls");
   printf("\n******CARDÁPIO******");
   printf("\nMuzzarela");
   printf("\nPortuguesa");
   printf("\nCamarão");
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
