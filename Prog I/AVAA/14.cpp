//Criador: Matheus Muniz Vantil Da Costa.
//Programa:fa�a um programa que pe�a uma nota, entre zero e dez.
//Mostre uma mensagem caso o valor seja inv�lido e continue 
//pedindo at� que o usu�rio informe um valor v�lido.
//Data de cria��o:14/06/2020.
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
			printf("\nValor inv�lido\n");
			system("pause");					
		}
	printf("Valor v�lido");
}

