/*
Criadora: Jéssika Reis de Mello
Data: 28/08/2020
1) Faça um programa em C para receber o Nome e as 3 Notas de um Aluno. 
Ao final, calcule e imprima a média aritmética deste aluno.*/

#include<stdio.h>
#include<locale.h>
main()

{
	float n1, n2, n3, nome, media;
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o nome do aluno:\n");
	fflush(stdin);
	scanf("f",&nome);
	printf("\nDigite as 3 notas:\n");
	fflush(stdin);
	printf ("Digite a n1:");
	fflush(stdin);
	scanf ("%f", &n1);
	printf ("Digite a n2:");
	fflush(stdin);
	scanf ("%f", &n2);
	printf ("Digite a n3:");
	fflush(stdin);
	scanf ("%f", &n3);

	
	media= (n1+n2+n3)/3;
	printf ("\nMédia %.2f", media);	
}
