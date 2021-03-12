/*MATRIZ
02) Criar um algoritmo que leia os elementos de uma matriz inteira de 4 x 4 e
imprimir os elementos da diagonal principal.  

Criadora:Jéssika Reis de Mello
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<locale.h>

main()
{	
	srand(time(NULL));
	int a, s, d, f=4;
	int vet[f][f];
	
	setlocale(LC_ALL,"portuguese");
	printf("A matriz é:\n");
	for(a=0;a<f;a++)
	{
		for(s=0;s<f;s++)
		{
		
		vet[a][s]= rand()%100;
		printf("%i\t", vet[a][s]);
		}
		printf("\n");	
	}
	
	printf("\n\nA diagonal principal é:\n");
	for(d=0;d<f;d++) printf("%i\t", vet[d][d]);
	
}
