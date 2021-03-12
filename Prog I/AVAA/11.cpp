//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Faça um programa que simule uma calculadora com as seguintes operações:
//Adição, subtração, multiplicação e divisão.
//com seus devidos cálculos discriminados..
//Data de criação:14/06/2020.
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int w=0, y=1, yy=0, yyy=0;
	float ll[50]={}, total ;
	char expre[1][50]={}, z;
	
	printf("\t\tCalculadora\n\n"); 
	printf("Entre com um número: ");
	scanf("%f", &ll);
	total=ll[0];
	
	do
	{
		system("cls");
		printf("\t\tCalculadora");
		printf("\n----------------------------------------------");
		printf("\n\n\t\t\t%.2f", total);
		printf("\n\n(+) - Adição");
		printf("\n(-) - Subtração");
		printf("\n(*) - Multiplicação");
		printf("\n(/) - Divisão");
		printf("\n(s) - Sair\n\n");
		fflush(stdin);
		scanf("%c", &z);
		switch (z)
		{
			
			case '+' :
				system("cls");
				strcpy(expre[yy], "+");
				printf("\t\t\tAdição");	
				printf("\nEscolha um número: ");
				fflush(stdin);
				scanf("%f", &ll[y]);
				total=total+ll[y];	
				y++;
				yy++;								
				break;
			case '-':
				system("cls");
				strcpy(expre[yy], "-");
				printf("\t\t\tSubtração");
				printf("\nEscolha um número: ");
				fflush(stdin);
				scanf("%f", &ll[y]);
				total=total-ll[y];	
				y++;
				yy++;
				break;
			case '*':	
				system("cls");
				strcpy(expre[yy], "*");
				printf("\t\t\tMultiplicação");
				printf("\nEscolha um número: ");
				fflush(stdin);
				scanf("%f", &ll[y]);
				total=total*ll[y];	
				y++;
				yy++;
				break;
			case '/':
				system("cls");
				strcpy(expre[yy], ":");
				printf("\t\t\tDivisão");
				printf("\nEscolha um número: ");
				fflush(stdin);
				scanf("%f", &ll[y]);
				total=total/ll[y];	
				y++;
				yy++;
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
		
		printf(" %s %.2f",expre[yyy], ll[w]);
		yyy++;
	}
	printf(" = %.2f.", total);
}
