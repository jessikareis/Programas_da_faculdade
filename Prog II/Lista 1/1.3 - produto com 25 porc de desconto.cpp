/*Criador: J�ssika Reis de Mello.
Lista 1
Programa: 3) Fa�a um programa em C para obter o c�digo e o pre�o de um produto.
Ao final, o programa dever� exibir o novo pre�o do produto com desconto de 25%.
Data de cria��o:31/08/2020.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main()
{
	
float preco, desconto, produto;

setlocale(LC_ALL,"portuguese");

printf("Informe o c�digo do produto: "),
scanf("%f", &produto);

printf("Informe o pre�o do produto: "),
scanf("%f", &preco);

printf("\n Novo pre�o do produto com desconto de 25%% �: %.2f",preco-preco*0.25);
}
