/*19. Fa�a um Programa que leia 2 n�meros e em seguida pergunte ao usu�rio qual opera��o ele deseja 
realizar. O resultado da opera��o deve ser acompanhado de uma frase que diga se o n�mero �:
. par ou �mpar;
a. positivo ou negativo;
b. inteiro ou decimal.*/

#include<stdio.h>
#include<locale.h>
main()
{
	float n1, n2, total;
	int opc, resul;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite o primeiro n�mero:");
	scanf("%f", &n1);
	printf("\nDigite o segundo n�mero:");
	scanf("%f", &n2);
	
	printf("\nDigite o n�mero correspondente da opera��o desejada:");
	printf("\n1-Soma");
	printf("\n2-Subtra��o");
	printf("\n3-Multiplica��o");
	printf("\n4-Divis�o\n");
	scanf("%i", &opc);
	
		if(opc>0 && opc<5)
		{
			if(opc==1)
			total=n1+n2;
			
			if(opc==2)
			total=n1-n2;
			
			if(opc==3)
			total=n1*n2;
			
			if(opc==4)
			total=n1/n2;
			
		printf("\nO valor � %2.f",total);
		
			if(total>0)
				printf("\nO n�mero � positivo");
			else printf("\nO n�mero � negativo");
			
		if(total==(int)total)
		{
			printf(", inteiro");
			resul=total;
				if(resul%2==0)
					printf(" e par.");
				else
					printf(" e �mpar.");
		}
		else
			printf(" e decimal, sendo assim n�o � considerado par ou �mpar.");
		}	
}			

