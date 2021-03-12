/*Criadora: Jéssika Reis de Mello.
Programa:faça um programa com menu das seguintes opções:
1) calculadora
Monte uma calculadora de 4 operações usando comando switch/case
2) palíndromo
receba uma string e verifique se é um palíndromo. (imprima, caso seja)
3) mistura string
Receba 2 strings do mesmo tamanho e imprima em uma linha de forma entrelaçada.
obs: Caso as strings não sejam do mesmo tamanho, solicitar ao usuário a correção e não avançar o programa.
ex: 
string1= "prova"
string2="facil"
impressão= "pfraocvial"
4) Maior / menor
receba 3 números e informe o maior e o menor
5) fim
Data de criação:30/06/2020.*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
main()
{
	int x, z, v, b, q, yy, r, rr, yyy, ww, g, t, m, tam1, tam2, tf, rrr;
	float numero[100], total, maior, menor;
	char alt, expre[1][100]={}, pa1[50]={}, pa2[50]={};

	
	do
	{
		x=0;
		system("cls");
		setlocale(LC_ALL, "portuguese");
		printf("\n\t\tMenu");
		printf("\n\nFerramentas:");
		printf("\n1-Calculadora");
		printf("\n2-Palíndromo");
		printf("\n3-Misturar string");
		printf("\n4-Maior ou Menor");
		printf("\n5-Sair\n\n");
		fflush(stdin);
		scanf("%i", &z);
		if(z==1)
		{
			rr=0;
			v=0;
			do
			{	
				total=0;
				r=0;	
				yy=0;	
				q=1;
				system("cls");
				printf("\t\tCalculadora");
				printf("\nEntre com o primeiro número: ");
				fflush(stdin);
				scanf("%f", &numero);
				total=numero[0];
				do
				{
					yyy=0;					
					system("cls");
					printf("\t\tCalculadora");
					printf("\n----------------------------------------------");
					printf("\n\n\t\t\t%.2f", total);
					printf("\n\n(+) - Adição");
					printf("\n(-) - Subtração");
					printf("\n(*) - Multiplicação");
					printf("\n(/) - Divisão");
					printf("\n(=) - Expressão");
					printf("\n(v) - Voltar ao menu");
					printf("\n(r) - Recomeçar\n\n");			
					fflush(stdin);
					scanf("%c", &alt);
					system("cls");
					if(alt== '+')
						{
							strcpy (expre[yy], "+");
							printf("\t\t\tAdição");	
							printf("\nEscolha um número: ");
							fflush(stdin);
							scanf("%f", &numero[q]);
							total=total+numero[q];
							q++;
							yy++;							
						}
					if(alt== '-')
					{
							strcpy (expre[yy], "-");
							printf("\t\t\tSubtração");	
							printf("\nEscolha um número: ");
							fflush(stdin);
							scanf("%f", &numero[q]);
							total=total-numero[q];
							q++;
							yy++;	
					}
					if(alt=='/')
					{
							strcpy (expre[yy], ":");
							printf("\t\tDivisão");	
							printf("\nEscolha um número: ");
							fflush(stdin);
							scanf("%f", &numero[q]);
							total=total/numero[q];
							q++;
							yy++;												
					}	
					if(alt=='*')
					{
							strcpy (expre[yy], "*");
							printf("\t\t\tMultiplicação");	
							printf("\nEscolha um número: ");
							fflush(stdin);
							scanf("%f", &numero[q]);
							total=total*numero[q];
							q++;
							yy++;						
					}	
					if(alt=='=')
					{
						system("cls");
						printf("\t\tCalculadora\n\n"); 
						printf("%.2f", numero[0]);
						for(int w=1;w<q;w++)
						{
							printf(" %s %.2f",expre[yyy], numero[w]);
							yyy++;
						}
						printf(" = %.2f.\n\n", total);
						system("pause");												
					}
					if(alt=='r')
					{
						r=1;
					}	
					
					if(alt=='v') 
					{
						r=1;						
						rr=1;
					}																		
				}while(r==0);
			}while(rr==0);
		}											
		if(z==2)
		{			
			r==0;
			do
			{
				system("cls");
				printf("\t\tPalíndromo");
				printf("\n1 - Continuar ");
				printf("\n2 - Voltar\n");
				fflush(stdin);
				scanf("%i", &ww);
				if(ww==2) r=1;
				if(ww==1)
				{	
					do 					
					{
						t=0;						
						system("cls");
						printf("\t\tPalíndromo");
						printf("\n\nEscreva a palavra que deseja saber: (EM MINÚSCULO)\n\n");
						fflush(stdin);
						gets(pa1);											
						system("cls");	
						strcpy(pa2,pa1);
						strrev(pa2);
						m=strcmp(pa1,pa2);						
						printf("\t\tPalíndromo\n\n");																
						if(m==0) 
							printf(" %s é uma palavra palíndroma.", pa1);
						if(m==1)
							 printf(" %s não é uma palavra palíndroma.", pa1);
					
						printf("\n\n1 - Repetir");
						printf("\n2 - Menu\n");
						do 
						{	
							r=0;								
							scanf("%i", &g);
							if(g==1)	r++;
							if(g==2)
							{
								r++;
								t++;
								r++;
							}					
							
						}while(r==0);
					}while(t==0);										
				}
				
			}while(r==0);
		}
		if(z==3)
		{
			
			do
			{
				r=0;
				system("cls");
				printf("\t\tMisturar string");
				printf("\n1 - Continuar ");
				printf("\n2 - Voltar\n");	
				fflush(stdin);	
				scanf("%i", &ww);
				if(ww==2) r=1;
					if(ww==1)
					{
						
						do
						{
							rrr=0;
							g=0;
							system("cls");
							printf("\t\tMisturar string");
							printf("\n\nEscreva a primeira palavra: ");	
							fflush(stdin);						
							gets(pa1);
							system("cls");
							tam1=strlen(pa1);
							printf("\t\tMisturar string");
							printf("\n\nEscreva a segunda palavra: ");						
							fflush(stdin);
							gets(pa2);																	
							tam2=strlen(pa2);	
							system("cls");
							if(tam1>tam2) tf=tam1;
							else tf=tam2;
							printf("\t\tMisturar string");
							printf("\n\nAs palavas são %s e %s.", pa1, pa2);
							printf("\nmisturada: ");
							for(int ppp=0;ppp<tf;ppp++)
							{
								if(ppp<tam1)  printf("%c",pa1[ppp]);
								if(ppp<tam2)  printf("%c",pa2[ppp]);
							}	
							printf("\n\n1 - Tentar novamente");
							printf("\n2 - Menu\n");
							do
							{							
								fflush(stdin);
								scanf("%i", &g);							
								if(g==1)	t=1;																	
								if(g==2)
								{
									t=1;
									rrr=1;
									r=1;
								}
							}while(t==0);																			
						}while(rrr==0);
					}
			}while(r==0);
		}
		if(z==4)
		{
			do
			{
				r=0;
				system("cls");
				printf("\t\tMaior e Menor");
				printf("\n1 - Continuar ");
				printf("\n2 - Voltar\n");	
				fflush(stdin);	
				scanf("%i", &ww);
				if(ww==2) r=1;
				if(ww==1)
				{
					do
					{		
						rr=0;	
						system("cls");
						printf("\t\tMaior e Menor");
						printf("\n\nQuantos números deseja? ");
						fflush(stdin);	
						scanf("%i", &q);
						system("cls");
						printf("\t\tMaior e Menor");
						printf("\n\nDigite %i números.\n", q);	
						for(int www=0;www<q;www++)
						{
							fflush(stdin);
							scanf("%f", &numero[www]);
							if(www==0) 
							{
								maior=numero[www];
								menor=numero[www];
							}			
							if(numero[www]>maior) maior=numero[www];
							if(numero[www]<menor) menor=numero[www]; 			
						}
						system("cls");
						printf("\t\tMaior e Menor");
						printf("\n\nOs números foram: ");	
						for(int www=0;www<q;www++)
						{
							printf("%.2f  ", numero[www]);
						}
						printf("\n\nO maior é %.2f.", maior);
						printf("\nO menor é %.2f.\n", menor);
						do
						{
							t=0;
							printf("\n\n1 - Tentar novamente");
							printf("\n2 - Menu\n\n");
							fflush(stdin);
							scanf("%i", &ww);
							if(ww==1) t=2;
							if(ww==2)
							{
								t=2;
								rr=2;
								r=2;
							}
						}while(t==0);
						
						
					}while(rr==0);
				}		
			}while(r==0);
		}
		if(z==5) x=1;	
	}while(x==0);
		
}

