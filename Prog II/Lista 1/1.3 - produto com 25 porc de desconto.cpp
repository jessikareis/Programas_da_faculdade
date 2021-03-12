/*Criador: Jéssika Reis de Mello.
Lista 1
Programa: 3) Faça um programa em C para obter o código e o preço de um produto.
Ao final, o programa deverá exibir o novo preço do produto com desconto de 25%.
Data de criação:31/08/2020.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main()
{
	
float preco, desconto, produto;

setlocale(LC_ALL,"portuguese");

printf("Informe o código do produto: "),
scanf("%f", &produto);

printf("Informe o preço do produto: "),
scanf("%f", &preco);

printf("\n Novo preço do produto com desconto de 25%% é: %.2f",preco-preco*0.25);
}
