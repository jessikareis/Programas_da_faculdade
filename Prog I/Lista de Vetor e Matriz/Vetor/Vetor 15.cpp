/*Vetor
15) Preencher um vetor com 5 números e guardar o cubo dos números em outro
vetor. Mostrar os dois vetores

Jéssika Reis de Mello*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	int y=5, z;
	int x[5]={8, 4, 6, 2, 5}, w[y];
	
	
	printf("\nVetor:\n");
	for(z=0;z<y;z++)	
	printf("%i\t", x[z]);
    printf("\nVetor ao cubo: \n");
	
	for(z=0;z<y;z++)	
	{ 
		w[z]=pow(x[z],3);
		printf("%i\t", w[z]);	
	}
}
