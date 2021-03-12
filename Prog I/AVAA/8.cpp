//Criador: Matheus Muniz Vantil Da Costa.
//Programa: Faça um programa que faça 6 perguntas para uma pessoa sobre um crime.
// O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. 
//Se a pessoa responder positivamente a 3 questões ela deve ser classificada como "Suspeita", 
//entre 4 e 5 como "Cúmplice" e 6 como "Assassino". Caso contrário, ele será classificado como "Inocente".
//Data de criação:14/06/2020.
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
		printf("Responda com sim ou não.\n ");
		switch (y)
		{
			case 1:
				printf("\nConhece a vítima? ");
				break;
			case 2:
				printf("\nTelefonou para a vítima? ");
				break;
			case 3:
				printf("\nEsteve no local do crime? ");
				break;
			case 4:
				printf("\nMora perto da vítima? "); 
				break;
			case 5:
				printf("\nDevia para a vítima? ");
				break;	
			case 6:
				printf("\nJa trabalhou com a vítima? ");
				break;	
		}
		
		fflush(stdin);
		gets(ff);	
		if (strcmp (ff,"sim") == 0)  	x=x+1;
		system("cls");
	}
	system("cls");
	if(x<=2) printf("\nVc é inocente");
	if(x==3) printf("\nVc é suspeito.");
	if(x==4 || x==5) printf("\nVc é cumplice.");
	if(x==6) printf("\nVc é o assassino. ");
}
	
	
