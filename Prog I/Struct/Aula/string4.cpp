/* 
Prog: Ler nome, endereço, telefone e imprimir
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atualização: 01/01/2017
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	char nome[30], endereco[30], telefone[15];
	printf("Informe seu nome: ");
	gets(nome);
	printf("Informe seu endereco: ");
	gets(endereco);
	printf("Informe seu telefone: ");
	gets(telefone);
	printf("\n\nNome: %s\n\n",nome);
	printf("Endereco: %s\n\n",endereco);
	printf("Telefone: %s\n\n",telefone);
	system("PAUSE");
	return 0;
}
