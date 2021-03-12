/*Vetor
21) Preencher um vetor com os números 10 a 20, e depois mostrar o vetor. 
Jéssika Reis de Mello*/

#include<stdio.h>
#include<locale.h>
main()
{	
	int v[11]={10,11,12,13,14,15,16,17,18,19,20};
	int x;
	
	setlocale(LC_ALL,"portuguese");
	printf("Números do vetor:\n");
	for(x=0;x<11;x++)	
	printf("%i\t", v[x]);
}
