//14. Fa�a um Programa que pe�a um n�mero correspondente a um determinado ano e em seguida
//informe se este ano � ou n�o bissexto.

#include<stdio.h>
#include<locale.h>

main()
{
	int ano;
		setlocale(LC_ALL,"portuguese");
		printf("Digite o ano:");
		scanf("%i",&ano);
		
	if((((ano%4)==0) && ((ano%100)!=0))|| ((ano%400)==0))
	printf("\nO ano � bissexto!:",ano);
	
	else
	printf("\nO ano n�o � bissexto!",ano);
	

}
