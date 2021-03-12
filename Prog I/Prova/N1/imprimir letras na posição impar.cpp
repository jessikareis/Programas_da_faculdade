/*Prova: N1
Autora: Jéssika Reis de Mello
Horário: 18:03
QUESTÃO: faça um programa que receba um nome do usuário e imprima as letras na posição impar.
*/
#include <string.h>
#include <stdio.h>
#include<locale.h>

main()
{
	int x=1, y, tam;
	char nome[50];

	setlocale(LC_ALL,"portuguese");
	printf ("Digite um nome de usuário:\n");
	gets(nome);
	tam=strlen(nome);
	printf("\nAs letras na posição ímpar são: ",y);

	while(x<=tam-1)
	{
		printf(" %c ",nome[x]);
		x=x+2;
	}
}
