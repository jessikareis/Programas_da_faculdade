/*Criador: J�ssika Reis de Mello.
Lista 1
Programa:obter o nome de 28 alunos, calcular a m�dia e informar se foi aprovado ou nao.
Data de cria��o:14/09/2020.*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#define alunos 28

main()
{
	float nota=0; 
	int x, y;
	char n[alunos][40];
	float n1[alunos], n2[alunos], media[alunos];
	
	setlocale(LC_ALL, "portuguese");
	printf("******Ser�o %i alunos analisados.\n******", alunos);
	for(x=0;x<alunos;x++)
	{
		printf("\nInforme o nome do %i� aluno: ", x+1);
		gets(n[x]);
		printf("\nDigite sua 1� nota: ");
		scanf("%f", &n1[x]);
		printf("\nDigite sua 2� nota: ");
		scanf("%f", &n2[x]);
		media[x]=(n1[x]+n2[x])/2;
		setbuf(stdin,NULL);
	}
	system("cls");
	printf("\nNome\t\tM�dia\t\tSitua��o");
	for(x=0;x<alunos;x++)
	{
		printf("\n%s\t\t ", n[x]);
		if(media[x]>=7) printf("%.2f\t\tAPROVADO", media[x]);
		else printf("%.2f\t\tREPROVADO", media[x]);
	}
}
