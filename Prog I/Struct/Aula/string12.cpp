/* 
Prog: Receber do teclado a sigla do estado de uma pessoa e imprimir
uma das seguintes mensagens:
Carioca
Paulista
Mineiro
Outros estados
Autor: Anselmo Pestana R Costa
Data de Cria??o: 01/01/2017
Ult. Atualiza??o: 01/01/2017
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// neste programa tem que usar o arquivo de include string.h por causa da fun??o
// strcmp, cuja fun??o ? comparar duas strings.
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
