/*Vetor
18)Preencher um vetor com os n�meros 10 a 20, e depois mostrar os elementos
�mpares do vetor.

J�ssika Reis de Mello*/

#include<stdio.h>
#include<locale.h>

main()
{	
	int v[11]={10,11,12,13,14,15,16,17,18,19,20};
	int x=10;
	
	setlocale(LC_ALL, "portuguese");
	printf("\nOs N�meros �mpares s�o:\n");
	for(x=0;x<10;x++)
	{		
		if(v[x]%2!=0)
		printf("%i\t", v[x]);
	}
}
