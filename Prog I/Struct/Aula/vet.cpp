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
	int num,i;
	// montar vetor impar
	ind=0;
	for (num=0; num < 20; num++)
	{
		if (num%2!=0)
		{
			vet1[ind]=num;
			ind++;
		}		
	}
	// montar vetor sequencial
	ind=0;
	for (num=10; num < 20; num++)
	{
			vet2[ind]=num;
			ind++;		
	}	
	// somar os vetores e imprimir
	for (i=0; i<10; i++)
	{
		printf("%d\t", vet1[i]+vet2[i]);
			
	}	
	
}
