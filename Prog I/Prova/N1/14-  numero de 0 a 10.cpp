/*Criador: J�ssika Reis de Mello.
Programa:Fa�a um programa que pe�a uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inv�lido e continue 
pedindo at� que o usu�rio informe um valor v�lido.
Data de cria��o:01/07/2020.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	
	int x=12, y=0;
	while(y==0)
		{
			setlocale(LC_ALL,"portuguese");
			printf("Digite um n�mero entre 0 e 10: ");
			fflush(stdin);
			scanf("%i", &x);		
			if(x>=0 && x<=10) 
			{
				y;
				break;
			}					
			printf("\nO valor � inv�lido\n");
			system("pause");					
		}
	printf("O valor � v�lido");
}

