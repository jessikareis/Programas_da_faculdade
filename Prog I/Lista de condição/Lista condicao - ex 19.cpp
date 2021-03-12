/*19. Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja 
realizar. O resultado da operação deve ser acompanhado de uma frase que diga se o número é:
. par ou ímpar;
a. positivo ou negativo;
b. inteiro ou decimal.*/

#include<stdio.h>
#include<locale.h>
main()
{
	float n1, n2, total;
	int opc, resul;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite o primeiro número:");
	scanf("%f", &n1);
	printf("\nDigite o segundo número:");
	scanf("%f", &n2);
	
	printf("\nDigite o número correspondente da operação desejada:");
	printf("\n1-Soma");
	printf("\n2-Subtração");
	printf("\n3-Multiplicação");
	printf("\n4-Divisão\n");
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
			
		printf("\nO valor é %2.f",total);
		
			if(total>0)
				printf("\nO número é positivo");
			else printf("\nO número é negativo");
			
		if(total==(int)total)
		{
			printf(", inteiro");
			resul=total;
				if(resul%2==0)
					printf(" e par.");
				else
					printf(" e ímpar.");
		}
		else
			printf(" e decimal, sendo assim não é considerado par ou ímpar.");
		}	
}			

