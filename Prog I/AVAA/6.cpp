//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Fa�a um programa que pe�a do usu�rio um n�mero inteiro e verifique se est� compreendido entre 20 e 80. 
//Se tiver, imprimir �parab�ns�, sen�o imprimir �deu ruim�.
//Data de cria��o:14/06/2020.
#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int x;
	printf("Escolha um n�mero: ");
	scanf("%i", &x);
	if(x>=20 && x<=80 ) printf("\nParab�ns!!");
	else printf("Deu ruim.");
}
