/*Criadora: J�ssika Reis de Mello.
Programa:Fa�a um programa que simule uma calculadora com as seguintes opera��es:
Adi��o, subtra��o, multiplica��o e divis�o.
Data de cria��o:30/06/2020.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	int w=0, y=1, x=0, k=0;
	float ll[50]={}, total ;
	char expre[1][50]={}, z;
	
	setlocale(LC_ALL, "portuguese");
	printf("\t\tCalculadora\n\n"); 
	printf("Entre com um n�mero: ");
	scanf("%f", &ll);
	total=ll[0];
	
	do
	{
		system("cls");
		printf("\t\tCalculadora");
		printf("\n----------------------------------------------");
		printf("\n\n\t\t\t%.2f", total);
		printf("\n\n(+) - Adi��o");
		printf("\n(-) - Subtra��o");
		printf("\n(*) - Multiplica��o");
		printf("\n(/) - Divis�o");
		printf("\n(s) - Sair\n\n");
		fflush(stdin);
		scanf("%c", &z);
		switch (z)
		{
			
			case '+' :
				system("cls");
				strcpy(expre[x], "+");
				printf("\t\t\tAdi��o");	
				printf("\nEscolha um n�mero: ");
				fflush(stdin);
				scanf("%f", &ll[y]);
				total=total+ll[y];	
				y++;
				x++;								
				break;
			case '-':
				system("cls");
				strcpy(expre[x], "-");
				printf("\t\t\tSubtra��o");
				printf("\nEscolha um n�mero: ");
				fflush(stdin);
				scanf("%f", &ll[y]);
				total=total-ll[y];	
				y++;
				x++;
				break;
			case '*':	
				system("cls");
				strcpy(expre[x], "*");
				printf("\t\t\tMultiplica��o");
				printf("\nEscolha um n�mero: ");
				fflush(stdin);
				scanf("%f", &ll[y]);
				total=total*ll[y];	
				y++;
				x++;
				break;
			case '/':
				system("cls");
				strcpy(expre[x], ":");
				printf("\t\t\tDivis�o");
				printf("\nEscolha um n�mero: ");
				fflush(stdin);
				scanf("%f", &ll[y]);
				total=total/ll[y];	
				y++;
				x++;
				break;	
			case 's':				
				w++;
				break;
			case 'S':				
				w++;
				break;	
		}					
	}while(w==0);
	system("cls");
	printf("\t\tCalculadora\n\n"); 
	printf("%.2f", ll[0]);
	
	for(w=1;w<y;w++)
	{
	printf(" %s %.2f",expre[k], ll[w]);
	k++;
	}
	printf(" = %.2f.", total);
}
