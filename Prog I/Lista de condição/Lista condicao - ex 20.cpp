/*20. Fa�a um programa que fa�a 5 perguntas para uma pessoa sobre um crime. As perguntas s�o:
. "Telefonou para a v�tima?"
a. "Esteve no local do crime?"
b. "Mora perto da v�tima?"
c. "Devia para a v�tima?"
d. "J� trabalhou com a v�tima?" 
O programa deve no final emitir uma classifica��o sobre a participa��o 
da pessoa no crime. Se a pessoa responder positivamente a 2 quest�es ela 
deve ser classificada como "Suspeita", entre 3 e 4 como "C�mplice" e 5 como
"Assassino". Caso contr�rio, ele ser� classificado como "Inocente".*/

#include<stdio.h>
#include<string.h>
#include<locale.h>
main()
{ 
	char per[5];
	int x=0;
  
  		setlocale(LC_ALL,"portuguese");
		printf("Responda com sim ou n�o.\n ");
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
	
	
		if(x<2) printf("\nVoc� � inocente");
		if(x==2) printf("\nVoc� � suspeita.");
		if(x==3 || x==4) printf("\nVoc� � c�mplice.");
		if(x==5) printf("\nVoc� � o assassino. ");
	  		
}
