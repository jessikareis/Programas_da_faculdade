/*Criador: Jéssika Reis de Mello.
Programa:Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue 
pedindo até que o usuário informe um valor válido.
Data de criação:01/07/2020.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	
	int x=12, y=0;
	while(y==0)
		{
			setlocale(LC_ALL,"portuguese");
			printf("Digite um número entre 0 e 10: ");
			fflush(stdin);
			scanf("%i", &x);		
			if(x>=0 && x<=10) 
			{
				y;
				break;
			}					
			printf("\nO valor é inválido\n");
			system("pause");					
		}
	printf("O valor é válido");
}

