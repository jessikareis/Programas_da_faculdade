/*Criador: Jéssika Reis de Mello.
Programa:Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.
Data de criação:30/06/2020.*/
#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	float compri, area;
	
	printf("Digite o comprimento do quadrado? ");
	scanf("%f", &compri);
	area=compri*compri;

	printf("\nA área do quadrado = %.1f cm²", area);
	printf ("\nDobro da área do quadrado = %.1f cm².", area*2);
}
