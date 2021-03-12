/* 
Prog: Criar um algoritmo que entre com uma palavra e imprima conforme exemplo a seguir:
Exemplo: SONHO
Como a palavra SONHO tem 5 letras a impressão ficaria assim:
SONHO
SONHO SONHO
SONHO SONHO SONHO
SONHO SONHO SONHO SONHO
SONHO SONHO SONHO SONHO SONHO
Repare que foram impressos 5 vezes na horizontal e 5 na vertical.
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atualização: 01/01/2017
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
main()
{
	int x,y,tam;
	char nome[30];
	printf("Digite uma palavra: ");
	gets(nome);
	tam = strlen(nome);
	for (x=0; x <= tam; x++)
	{
		// o limite superior da repetição é o valor de x do primeiro for
		// y < x
		for (y=0;y<x;y++)
			printf("%s\t",nome);
		printf("\n");
	}
	system("pause");
	return 0;
}
