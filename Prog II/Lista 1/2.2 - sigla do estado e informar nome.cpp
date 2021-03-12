/*Criador: Jéssika Reis de Mello.
Lista 1
Programa: 2- DECISÃO
2.2) Receber do teclado a sigla do estado de uma pessoa e imprimir uma das 
seguintes mensagens: Carioca, Paulista, Mineiro e Outros estados.
Data de criação:31/08/2020.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// neste programa tem que usar o arquivo de include string.h por causa da função
// strcmp, cuja função é comparar duas strings.
main()
{
	char estado[3];
	printf("Informe a sigla de um estado do Brasil: ");
	gets(estado);
	//scanf("%s", estado);
	if ((strcmp(estado,"MG") == 0) || (strcmp(estado,"mg") == 0))
		printf("Mineiro\n");
	else
		if((strcmp(estado,"RJ") == 0) || (strcmp(estado,"rj") == 0))
			printf("Carioca\n");
		else
			if((strcmp(estado,"SP") == 0) || (strcmp(estado,"sp") == 0))
				printf("Paulista\n");
			else
				printf("Outros estados\n");
	printf("\n");
	system("pause");
	return 0;
}
