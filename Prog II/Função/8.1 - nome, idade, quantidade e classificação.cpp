/*Programa: Faça um programa em C para obter o Nome e a Idade dos participantes do torneio de tenis
da cidade de macaé e exibir a quantidade de participante inscritos em cada categoria...
Autora: Jéssika Reis de Mello
Data de criação:15/09/2020.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char nome[30];
	int idade, juvenil=0, adulto=0, master=0;
	
	printf("****Digite 'sair' para finalizar****");
	while(true)
	{
		printf("\n\nNome do particiante: ");
		fflush(stdin);
		gets(nome);
		if(strcmp(nome,"sair") == 0) 
		break;
		printf("Idade: ");
		setbuf(stdin,NULL);
		scanf("%d", &idade);
		if(idade>=10 && idade<=17) 
		juvenil++;
		else
		{
			if(idade>=18 && idade<=40) 
			adulto++;
			else
			{
				if(idade>40)
				 master++;	
			}
		}
	}
	system("cls");
	printf("\n******CONTAGEM******");
	printf("\nJuvenil = %i", juvenil);
	printf("\nAdulto = %i", adulto);
	printf("\nMaster = %i", master );
}
