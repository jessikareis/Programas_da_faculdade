/*Prova: N1
Autora: J�ssika Reis de Mello
Hor�rio: 18:03
QUEST�O: fa�a um programa que receba um nome do usu�rio e imprima as letras na posi��o impar.
*/
#include <string.h>
#include <stdio.h>
#include<locale.h>

main()
{
	int x=1, y, tam;
	char nome[50];

	setlocale(LC_ALL,"portuguese");
	printf ("Digite um nome de usu�rio:\n");
	gets(nome);
	tam=strlen(nome);
	printf("\nAs letras na posi��o �mpar s�o: ",y);

	while(x<=tam-1)
	{
		printf(" %c ",nome[x]);
		x=x+2;
	}
}
