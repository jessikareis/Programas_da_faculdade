//12. Faça um Programa que peça os 3 lados de um triângulo. 
//O programa deverá informar se os valores podem ser um triângulo. 
//Indique, caso os lados formem um triângulo, se o mesmo é: 
//equilátero, isósceles ou escaleno.


#include <stdio.h>
#include<locale.h>
#include <conio.h>

main()

{
	float A,B,C;

	setlocale(LC_ALL,"portuguese");
	printf("Digite o tamanho do lado A de seu triângulo:");
	scanf("%f",&A);

	printf("Digite o tamanho do lado B de seu triângulo:");
	scanf("%f",&B);

	printf("Digite o tamanho do lado C de seu triângulo:");
	scanf("%f",&C);

	if(A<(B+C) & B<(A+C) & C<(A+B)) //verifica se é um triangulo
	
	{
	if(A==B & B==C) // Não é preciso tantos testes 
	printf("\nO triângulo é Equilatero.");

	else 
		if(A==B||A==C||B==C)
		printf("\nO triângulo é Isoceles.");

	else
		printf("\nO triângulo é Escaleno");
	}	
	
	else
	printf("\nNão é triângulo!");
}
