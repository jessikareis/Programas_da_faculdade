//Criador: Matheus Muniz Vantil Da Costa.
//Programa:faça um programa que peça uma nota, entre zero e dez.
//Mostre uma mensagem caso o valor seja inválido e continue 
//pedindo até que o usuário informe um valor válido.
//Data de criação:14/06/2020.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


main()
{
	setlocale(LC_ALL, "portuguese");
	int x=12, z=0;
	while(z==0)
		{
			system("cls");
			printf("Informe uma nota entre 0 e 10: ");
			fflush(stdin);
			scanf("%i", &x);		
			if(x>=0 && x<=10) 
			{
				z;
				break;
			}					
			printf("\nValor inválido\n");
			system("pause");					
		}
	printf("Valor válido");
}

