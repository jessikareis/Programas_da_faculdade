/*Prova: N1/
Autora: Jéssika Reis de Mello
QUESTÃO: Faça um Programa que peça as 4 notas bimestrais e mostre a média.
OBS - Não pode ser usado comandos de repetição.
Data da criação: 19/05/2020
*/
#include<stdio.h>
#include<locale.h>
main()

{
	float n1, n2, n3, n4, media;
	setlocale(LC_ALL,"portuguese");
	printf("Digite as 4 notas bimestrais:\n");
	printf ("Digite a n1:");
	scanf ("%f", &n1);
	printf ("Digite a n2:");
	scanf ("%f", &n2);
	printf ("Digite a n3:");
	scanf ("%f", &n3);
	printf ("Digite a n4:");
	scanf ("%f", &n4);
	
	media= (n1+n2+n3+n4)/4;
	printf ("\nMédia %.2f", media);	
}
