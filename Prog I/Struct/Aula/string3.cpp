/* 
Prog: Escrever seu nome na tela 10 vezes. Um nome por linha.
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atulaização: 01/01/2017
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	int x;
	char nome[30]="Anselmo Pestana";
	for (x=1;x <=10; x++)
		printf("\n%s", nome);
	printf("\n");
	system("pause");
	return 0;
}
