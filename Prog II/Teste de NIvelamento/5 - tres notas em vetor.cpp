/*Criador: J�ssika Reis de Mello.
Testa de Nivelamento Prog II
Programa: Fa�a um programa em C para obter as 3 Notas de um Aluno. Ao final, calcule e imprima
 a m�dia aritm�tica. As notas dever�o ser armazenadas numa �nica vari�vel do tipo vetor.
Data de cria��o:23/08/2020.*/

#include<stdio.h>
#include<locale.h>
#include<math.h>
#define aluno 1

main()
{
	float nota=0; 
	int x;
	char nome[aluno][20];
	float n1[aluno], n2[aluno], n3[aluno], med[aluno];
	
	setlocale(LC_ALL,"portuguese");
	printf("******Digite as 3 notas do aluno a seguir******");
	{
		printf("\nDigite o nome do aluno: ");
		gets(nome[x]);
		
		printf("\nDigite sua 1� nota: ");
		scanf("%f", &n1[x]);
		
		printf("\nDigite sua 2� nota: ");
		scanf("%f", &n2[x]);
		
		printf("\nDigite sua 3� nota: ");
		scanf("%f", &n3[x]);
		
		med[x]=(n1[x]+n2[x]+n3[x])/3;
		setbuf(stdin,NULL);
	}
	printf("\nNome\t\tM�dia");
		{
		printf("\n%s\t\t ", nome[x]);
		printf("%.2f", med[x]);
	}
	
}
