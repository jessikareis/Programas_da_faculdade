/*

Autor: Anselmo

Prog: 

Data de criação: 20/05/2020

Última atualização: 20/05/2020

*/
#include <stdio.h>
#include <string.h>
main()
{
	int i,n;
	char string1[50];
	char string2[50];
	while (1==1)
	{
		printf("Digite uma palavra para intercalar: ");
		gets(string1);
		printf("Digite uma palavra para intercalar do mesmo tamanho: ");
		gets(string2);
		if (strlen(string1) != strlen(string2))
			printf("Tamanhos diferentes, favor tentar novamente!  ");
		else
			break;
	} 
	for (i=0; i< strlen(string1); i++)
	{
		printf("%c",string1[i]);
		printf("%c",string2[i]);
	}		
}
