//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Fa�a um programa que gere 100 n�meros aleat�rios entre 0 e 1000 e informe o maior deles.
//Data de cria��o:15/06/2020.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int x, z, maior, menor;
	
	printf("os n�meros s�o: \n");
	for(x=1;x<=100;x++)
	{
		z=rand()%1001;
		printf("%i\t", z);
		if(x==1)
		{
			maior=z;
			menor=z;
		}
		if(z>maior) maior=z;
		if(z<menor)	menor=z;
			
	}
	printf("\n\nMaior: %i\nMenor: %i",maior, menor);
	
}

