//Criador: Matheus Muniz Vantil Da Costa.
//Programa: construa um algoritmo que calcule seu peso ideal.
//Data de criação:13/06/2020.
#include<stdio.h>
main()
{
	float altura, peso1, peso2;
	
	
	printf("Qual a sua altura? ");
	scanf("%f", &altura);
	peso1=(72.7*altura)-58;
	peso2=(62.1*altura)-44.7;
	printf("\nPeso ideal caso seja homem: %.2f", peso1);
	printf("\nPeso ideal caso seja mulher: %.2f", peso2);
}
 

