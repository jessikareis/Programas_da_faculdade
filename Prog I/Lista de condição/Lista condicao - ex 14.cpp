//14. Faça um Programa que peça um número correspondente a um determinado ano e em seguida
//informe se este ano é ou não bissexto.

#include<stdio.h>
#include<locale.h>

main()
{
	int ano;
		setlocale(LC_ALL,"portuguese");
		printf("Digite o ano:");
		scanf("%i",&ano);
		
	if((((ano%4)==0) && ((ano%100)!=0))|| ((ano%400)==0))
	printf("\nO ano é bissexto!:",ano);
	
	else
	printf("\nO ano não é bissexto!",ano);
	

}
