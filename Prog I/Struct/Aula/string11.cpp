/* 
Prog: Receber um nome do teclado e imprim�-lo de tr�s pra frente.
Autor: Anselmo Pestana R Costa
Data de Cria��o: 01/01/2017
Ult. Atualiza��o: 01/01/2017
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
	printf("\n A palavra de tras pra frente e: ");
	for (x=tam-1; x >= 0; x--)
		printf("%c",nome[x]);
	printf("\n\n");
	system("pause");
	return 0;
}
