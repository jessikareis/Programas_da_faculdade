/*Criador: Jéssika Reis de Mello.
Lista 1
Programa:obter o nome de 28 alunos, calcular a média e informar se foi aprovado ou nao.
Data de criação:14/09/2020.*/
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
	printf("******Serão %i alunos analisados.\n******", alunos);
	for(x=0;x<alunos;x++)
	{
		printf("\nInforme o nome do %iº aluno: ", x+1);
		gets(n[x]);
		printf("\nDigite sua 1º nota: ");
		scanf("%f", &n1[x]);
		printf("\nDigite sua 2º nota: ");
		scanf("%f", &n2[x]);
		media[x]=(n1[x]+n2[x])/2;
		setbuf(stdin,NULL);
	}
	system("cls");
	printf("\nNome\t\tMédia\t\tSituação");
	for(x=0;x<alunos;x++)
	{
		printf("\n%s\t\t ", n[x]);
		if(media[x]>=7) printf("%.2f\t\tAPROVADO", media[x]);
		else printf("%.2f\t\tREPROVADO", media[x]);
	}
}
