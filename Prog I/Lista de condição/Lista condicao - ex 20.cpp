/*20. Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
. "Telefonou para a vítima?"
a. "Esteve no local do crime?"
b. "Mora perto da vítima?"
c. "Devia para a vítima?"
d. "Já trabalhou com a vítima?" 
O programa deve no final emitir uma classificação sobre a participação 
da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela 
deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como
"Assassino". Caso contrário, ele será classificado como "Inocente".*/

#include<stdio.h>
#include<string.h>
#include<locale.h>
main()
{ 
	char per[5];
	int x=0;
  
  		setlocale(LC_ALL,"portuguese");
		printf("Responda com sim ou não.\n ");
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
	
	
		if(x<2) printf("\nVocê é inocente");
		if(x==2) printf("\nVocê é suspeita.");
		if(x==3 || x==4) printf("\nVocê é cúmplice.");
		if(x==5) printf("\nVocê é o assassino. ");
	  		
}
