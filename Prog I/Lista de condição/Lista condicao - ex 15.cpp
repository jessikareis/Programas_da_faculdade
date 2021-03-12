//15. Faça um Programa que leia um número inteiro menor que 1000 e imprima a quantidade de
//centenas, dezenas e unidades do mesmo.
//o Observando os termos no plural a colocação do "e", da vírgula entre outros. Exemplo:
//o 326 = 3 centenas, 2 dezenas e 6 unidades
//o 12 = 1 dezena e 2 unidades Testar com: 326, 300, 100, 320, 310,305, 301, 101, 311,
//111, 25, 20, 10, 21, 11, 1, 7 e 16

#include<stdio.h>
#include<locale.h>
 main()
 {
 	int n, centena, dezena, unidade, x, v, z;
 
 setlocale(LC_ALL,"portuguese");
 printf("\nDigite um número inteiro menor que 1000:");
 scanf("%i", &n);
 
 	centena=n/100;
 	dezena=(n-(centena*100))/10;
 	unidade=(n-(centena*100)-(dezena*10));
 
 	if(centena>1)
 	{
 	x=2;	
 	printf("\nCentenas:%i",centena);
 	}
 
 	else
 	if(centena==1)
 	{
 	printf("\nCentena:%d",centena); 	
 	}
 
		if(dezena>1)
 		{
 		v=2;	
		printf("\nDezenas:%i",dezena);		
	 	}
	 
		else
		if(dezena==1)		
		{
		printf("\nDezena:%d",dezena);					
		}
		
			if(unidade>1)
			{ 
			z=2;
			printf("\nUnidades:%i",unidade);
			}
			
			else
			if(unidade==1)
			{				
			printf("\nUnidade:%d",unidade);
			}
			
		printf("\nO número possui:");			
		if(x==2) printf("%i centenas, ", centena);
		else printf("%i centena, ", centena);
	
		if(v==2) printf("%i dezenas e ", dezena);
		else printf("%i dezena e ", dezena);
	
		if(z==2) printf("%i unidades.", unidade);	
		else printf("%i unidade.", unidade);
	
 }
