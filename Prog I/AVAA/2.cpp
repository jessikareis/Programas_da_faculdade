//Criador: Matheus Muniz Vantil Da Costa.
//Programa: Fa�a um Programa que pe�a 2 n�meros inteiros e um n�mero real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo,
//a soma do triplo do primeiro com o terceiro e o terceiro elevado ao cubo.
//Data de cria��o:13/06/2020.
#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
main()

{
	
	setlocale(LC_ALL, "portuguese");
	int n1, n2;
	float n3, x1, x2, x3;
	
	printf("Informe um n�mero INTEIRO: ");
	scanf("%i", &n1);
	printf("\nInforme outro n�mero INTEIRO: ");
	scanf("%i", &n2);
	printf("\nInforme um n�mero REAL: ");
	scanf("%f", &n3);
	x1=pow(n1,2)*n2/2;
	x2=(n1*3)+n3;
	x3=pow(n3,3);
	system("cls");
	printf("%.2f", x1);
	printf("\n%.2f", x2);
	printf("\n%.2f", x3);
}
