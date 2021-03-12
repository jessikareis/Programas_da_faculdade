/*Prova: N1
Autora: Jéssika Reis de Mello
QUESTÃO: Escrever um programa que receba um nome fornecido pelo usuário e conte o número de vogais existentes nele. 
O programa deverá imprimir o numero total de caracteres do nome e a quantidade de vogais.
deve fornecer também a respectiva porcentagem das vogais em relação ao total de caracteres do nome..
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
#include <string.h>
main()
{
	int x, tam, quantidade, nomes, a, e, i, o, u, w; 
	char nome[50];
	{
		setlocale(LC_ALL,"portuguese");
		printf("Digite um nome: ");
		gets(nome);

		tam = strlen(nome);
		printf("\nEsse nome tem %d\ caracteres.\n",tam);
}
	for(x=0;x<=quantidade;x++)
	{
		tam=strlen(nomes[x]);
		for(y=0;y<tam;y++)
		{
		if(nomes[x][y]=='a' || nomes[x][y]=='A') a++;

		if(nomes[x][y]=='e' || nomes[x][y]=='E') w++;
		}
	}
	printf("\nA quantidade de letras 'a': %i.", a);	
	printf("\nA quantidade de letras 'e': %i.", e);
	printf("\nA quantidade de letras 'i': %i.", i);	
	printf("\nA quantidade de letras 'o': %i.", o);	
	printf("\nA quantidade de letras 'u': %i.", u);	
}		

