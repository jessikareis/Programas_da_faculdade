//12. Fa�a um Programa que pe�a os 3 lados de um tri�ngulo. 
//O programa dever� informar se os valores podem ser um tri�ngulo. 
//Indique, caso os lados formem um tri�ngulo, se o mesmo �: 
//equil�tero, is�sceles ou escaleno.


#include <stdio.h>
#include<locale.h>
#include <conio.h>

main()

{
	float A,B,C;

	setlocale(LC_ALL,"portuguese");
	printf("Digite o tamanho do lado A de seu tri�ngulo:");
	scanf("%f",&A);

	printf("Digite o tamanho do lado B de seu tri�ngulo:");
	scanf("%f",&B);

	printf("Digite o tamanho do lado C de seu tri�ngulo:");
	scanf("%f",&C);

	if(A<(B+C) & B<(A+C) & C<(A+B)) //verifica se � um triangulo
	
	{
	if(A==B & B==C) // N�o � preciso tantos testes 
	printf("\nO tri�ngulo � Equilatero.");

	else 
		if(A==B||A==C||B==C)
		printf("\nO tri�ngulo � Isoceles.");

	else
		printf("\nO tri�ngulo � Escaleno");
	}	
	
	else
	printf("\nN�o � tri�ngulo!");
}
