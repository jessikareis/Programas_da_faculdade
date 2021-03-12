/* 
programa: preencher um vetor com 10 elementos inteiros impares ioniciando em 0, 
criar vetor com 20 elementos inteiros sequenciais de 10 a 20
ao final imprimir a soma dos vetores
Autor: Anselmo
data criação: 13;05;2020
ult. alt: 13/05/2020
*/
#include <stdio.h>
main()
{
	int vet1[10], vet2[10], ind;
	int i;
	// montar vetor impar
	for (i=0; i < 20; i++)
	{
		if (i%2!=0)
		{
			vet1[i]=i;
		}		
	}
	//montar vetor sequencial
		for (i=0; i < 20; i++)
	{
		{
			vet2[i]=i+10;
		}		
	}
	printf("\n");	
	// somar os vetores e imprimir
	for (i=0; i < 10; i++)
	{
		printf("%d\t", vet1[i]);
			
	}	
	
}
