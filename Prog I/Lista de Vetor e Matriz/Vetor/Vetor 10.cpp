/*Vetor
10) Informar 3 nomes. Mostrar quantas letras "A" e "E", possuem
Jéssika Reis de Mello*/

#include<stdio.h>
#include<string.h>
#include<locale.h>
#define quantidade 3
main()
{
	int x, y, tam, a=0, w;
	char nomes[quantidade][20];
	
	setlocale(LC_ALL, "portuguese");
	printf("Digite %i nomes.\n", quantidade);
	for(x=1;x<=quantidade;x++)
	{
	printf("\nDigite %iº nome: ",x);
	gets(nomes[x]);
	}
	printf("\nOs nomes são: ");
	
	for(x=1;x<=quantidade;x++) 
		{
		printf("%s", nomes[x]);
		if(x==quantidade) printf(".");
		else printf(", "); 
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
	printf("\nA quantidade de letras 'e': %i.", w);	
}		
