//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. 
//Data de criação:17/06/2020.
#include<stdio.h>
#include<stdlib.h>
main()
{
	int x, y, t, z;
	
	
	do
	{	
		system("cls");
		printf("Deseja qual tabuada? ");	
		scanf("%i", &t);
		printf("-----------------------------\n");
		do
		{
		
			for(int v=1;v<=10;v++)
			{
				printf("%i x %i = %i\n", t, v, t*v);			
			}
			printf("-----------------------------\n");
			printf("\n 1- Recomecar");
			printf("\n 2- Sair\n");
			fflush(stdin);
			scanf("%i", &z);
			if(z==1) y=1;
			if(z==2)
				{
					y=1;
					x=1;
				}
		}while(y==0);
	}while(x==0);
}
