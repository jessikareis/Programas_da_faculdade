/*Criadora: J�ssika Reis de Mello.
Fa�a um programa que fa�a 6 perguntas para uma pessoa sobre um crime. As perguntas s�o: 
"Conhece a v�tima"
"Telefonou para a v�tima?" 
"Esteve no local do crime?" 
"Mora perto da v�tima?" 
"Devia para a v�tima?" 
"J� trabalhou com a v�tima?" 
O programa deve no final emitir uma classifica��o sobre a participa��o da pessoa no crime. Se a pessoa responder positivamente a 3 quest�es ela deve ser
classificada como "Suspeita", entre 4 e 5 como "C�mplice" e 6 como "Assassino". Caso contr�rio, ele ser� classificado como "Inocente".
Data: 30/06/2020*/

#include<stdio.h>
#include<string.h>
#include<locale.h>
main()
{ 
	char per[6];
	int x=0;
  
  		setlocale(LC_ALL,"portuguese");
		printf("Responda com sim ou n�o.\n ");
		printf("\nConhece a v�tima? ");
		gets(per);
	
		if (strcmp (per,"sim") == 0)  	x=x+1;
		printf("\nTelefonou para a v�tima? ");
		gets(per);
	
	if (strcmp (per,"sim") == 0)  	x=x+1;
		printf("\nEsteve no local do crime? ");
		gets(per);
	
	if (strcmp (per,"sim") == 0) 	x=x+1;
		printf("\nMora perto da v�tima? "); 
		gets(per);
	
	if (strcmp (per,"sim") == 0) 	x=x+1;
		printf("\nDevia para a v�tima? ");
		gets(per);
	
	if (strcmp (per,"sim") == 0) 	x=x+1;
		printf("\nJ� trabalhou com a v�tima? ");
		gets(per);
	
	if (strcmp (per,"sim") == 0) 	x=x+1;
	
	
		if(x<=2) printf("\nVoc� � inocente!");
		if(x==3) printf("\nVoc� � suspeito.");
		if(x==4 || x==5) printf("\nVoc� � c�mplice.");
		if(x==6) printf("\nVoc� � o assassino.");
	  		
}
