/*Criadora: Jéssika Reis de Mello.
Faça um programa que faça 6 perguntas para uma pessoa sobre um crime. As perguntas são: 
"Conhece a vítima"
"Telefonou para a vítima?" 
"Esteve no local do crime?" 
"Mora perto da vítima?" 
"Devia para a vítima?" 
"Já trabalhou com a vítima?" 
O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 3 questões ela deve ser
classificada como "Suspeita", entre 4 e 5 como "Cúmplice" e 6 como "Assassino". Caso contrário, ele será classificado como "Inocente".
Data: 30/06/2020*/

#include<stdio.h>
#include<string.h>
#include<locale.h>
main()
{ 
	char per[6];
	int x=0;
  
  		setlocale(LC_ALL,"portuguese");
		printf("Responda com sim ou não.\n ");
		printf("\nConhece a vítima? ");
		gets(per);
	
		if (strcmp (per,"sim") == 0)  	x=x+1;
		printf("\nTelefonou para a vítima? ");
		gets(per);
	
	if (strcmp (per,"sim") == 0)  	x=x+1;
		printf("\nEsteve no local do crime? ");
		gets(per);
	
	if (strcmp (per,"sim") == 0) 	x=x+1;
		printf("\nMora perto da vítima? "); 
		gets(per);
	
	if (strcmp (per,"sim") == 0) 	x=x+1;
		printf("\nDevia para a vítima? ");
		gets(per);
	
	if (strcmp (per,"sim") == 0) 	x=x+1;
		printf("\nJá trabalhou com a vítima? ");
		gets(per);
	
	if (strcmp (per,"sim") == 0) 	x=x+1;
	
	
		if(x<=2) printf("\nVocê é inocente!");
		if(x==3) printf("\nVocê é suspeito.");
		if(x==4 || x==5) printf("\nVocê é cúmplice.");
		if(x==6) printf("\nVocê é o assassino.");
	  		
}
