//Criador: Matheus Muniz Vantil Da Costa.
//Programa: Fa�a um programa que fa�a 6 perguntas para uma pessoa sobre um crime.
// O programa deve no final emitir uma classifica��o sobre a participa��o da pessoa no crime. 
//Se a pessoa responder positivamente a 3 quest�es ela deve ser classificada como "Suspeita", 
//entre 4 e 5 como "C�mplice" e 6 como "Assassino". Caso contr�rio, ele ser� classificado como "Inocente".
//Data de cria��o:14/06/2020.
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
main()
{ 
	setlocale(LC_ALL, "portuguese");
	char ff[5];
	int x=0, y;
  	
	for(y=1;y<=6;y++)
	{
		printf("Responda com sim ou n�o.\n ");
		switch (y)
		{
			case 1:
				printf("\nConhece a v�tima? ");
				break;
			case 2:
				printf("\nTelefonou para a v�tima? ");
				break;
			case 3:
				printf("\nEsteve no local do crime? ");
				break;
			case 4:
				printf("\nMora perto da v�tima? "); 
				break;
			case 5:
				printf("\nDevia para a v�tima? ");
				break;	
			case 6:
				printf("\nJa trabalhou com a v�tima? ");
				break;	
		}
		
		fflush(stdin);
		gets(ff);	
		if (strcmp (ff,"sim") == 0)  	x=x+1;
		system("cls");
	}
	system("cls");
	if(x<=2) printf("\nVc � inocente");
	if(x==3) printf("\nVc � suspeito.");
	if(x==4 || x==5) printf("\nVc � cumplice.");
	if(x==6) printf("\nVc � o assassino. ");
}
	
	
