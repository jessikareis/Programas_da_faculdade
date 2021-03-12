/*Vetor
8) Preencher um vetor de 8 elementos inteiros. 
Mostrar o vetor na horizontal com\t.
Calcular a média do vetor. Mostrar quantos números são múltiplos de 5. Quantos
números são maiores que 10 e menores que 30. Qual o maior número do vetor. 
Criadora: Jéssika Reis de Mello*/

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
	printf("O vetor irá ter %i posições.\n", y);
	printf("Deseja digitar os valores do vetor digite 1  ");
	printf("\nDeseja valores aleatórios digite 2 \n ");
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
	printf("\nOs valores do vetor são:\n");
	for (x=0;x<y;x++)	
	printf("%d\t", v[x]);
		
	media=soma/y;
	printf("\n\nA soma é: %0.f", soma);
	printf("\nA média do vetor é: %.2f", media);
	printf("\nNúmeros múltiplos por 5: %i números.", mult);
	printf("\nNúmeros maiores que 10 e menores que 30: %.0f números.", z);
	printf("\nO maior número do vetor é: %i.", maior);		
}
