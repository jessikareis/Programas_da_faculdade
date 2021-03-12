//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Faça um programa que peça do usuário um número inteiro e verifique se está compreendido entre 20 e 80. 
//Se tiver, imprimir “parabéns”, senão imprimir “deu ruim”.
//Data de criação:14/06/2020.
#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int x;
	printf("Escolha um número: ");
	scanf("%i", &x);
	if(x>=20 && x<=80 ) printf("\nParabéns!!");
	else printf("Deu ruim.");
}
