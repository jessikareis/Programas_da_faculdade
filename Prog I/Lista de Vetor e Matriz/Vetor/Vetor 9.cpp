/*Vetor
9) Preencher um vetor com 3 nomes e mostrar quantas letras A e E tem nos 3 nome. 
J�ssika Reis de Mello*/

#include<stdio.h>
#include<string.h>
#include<locale.h>
main()
{
		
	char nome[3][10]={"Maria", "Guilherme", "J�nior"};
	int tam,x,y, a, e;
	
	setlocale(LC_ALL, "portuguese");
	printf("Os nomes s�o %s, %s e %s", nome[0], nome[1], nome[2]);
	
	for(x=0;x<3;x++)
	{
		tam=strlen(nome[x]);
		for(y=0;y<3;y++)
		{			
			if(nome[x][y]=='a' || nome[x][y]=='A') a++;
			if(nome[x][y]=='e' || nome[x][y]=='E') e++;
		}
	}
	printf("\n\n N�meros de letras 'A': %d", a);
	printf("\n N�meros de letras 'E': %d", e);
	
	
	
}
