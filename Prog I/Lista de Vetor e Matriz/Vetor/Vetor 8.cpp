/*Vetor
8) Preencher um vetor de 8 elementos inteiros. 
Mostrar o vetor na horizontal com\t.
Calcular a m�dia do vetor. Mostrar quantos n�meros s�o m�ltiplos de 5. Quantos
n�meros s�o maiores que 10 e menores que 30. Qual o maior n�mero do vetor. 
Criadora: J�ssika Reis de Mello*/

#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>
main()

{
	srand(time(NULL));
	int y=9, x, mult=0, maior=0, w;
	int v[y]={};
	float media, soma=0, z=0;
	
	setlocale(LC_ALL, "portuguese");
	printf("O vetor ir� ter %i posi��es.\n", y);
	printf("Deseja digitar os valores do vetor digite 1  ");
	printf("\nDeseja valores aleat�rios digite 2 \n ");
	scanf("%i", &w);
	
	if(w==1)
	{   
		for(x=0;x<y;x++)
		{ 
		printf("\nDigite o valor [%i]: ", x);
		scanf("%i", &v[x]);
		soma=soma+v[x];					
		if(v[x]>maior) maior=v[x];		
		
		if(v[x]%5==0) mult++;
		if(v[x]<30 && v[x]>10) 	z++;
		}
	}

	if(w==2)
	{
		x=0;
		while(x<y)
		{
		v[x]=rand()%100;				
		soma=soma+v[x];					
		if(v[x]>maior) maior=v[x];		
			
		if(v[x]%5==0) mult++;
			
		if(v[x]<30 && v[x]>10) 	z++;
												
		 x++;	
		}
	}
	printf("\nOs valores do vetor s�o:\n");
	for (x=0;x<y;x++)	
	printf("%d\t", v[x]);
		
	media=soma/y;
	printf("\n\nA soma �: %0.f", soma);
	printf("\nA m�dia do vetor �: %.2f", media);
	printf("\nN�meros m�ltiplos por 5: %i n�meros.", mult);
	printf("\nN�meros maiores que 10 e menores que 30: %.0f n�meros.", z);
	printf("\nO maior n�mero do vetor �: %i.", maior);		
}
