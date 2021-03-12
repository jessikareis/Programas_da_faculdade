/*Vetor
24) Preencher um vetor com os números 10 a 20, e depois mostrar os elementos
pares do vetor de trás para frente. 
Jéssika Reis de Mello*/

#include<stdio.h>
#include<locale.h>
main()
{	
	int v[11]={10,11,12,13,14,15,16,17,18,19,20};
	int x=10;
	
	setlocale(LC_ALL, "portuguese");
	printf("Os vetores pares são:\n");
	for(x=10;x>=0;x=x-1)
	{
		if(v[x]%2==0)
		printf("%i\t", v[x]);
	}
}
