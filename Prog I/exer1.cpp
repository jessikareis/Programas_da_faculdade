/* Preencher um vetor com 8 elementos inteiros.
Mostrar o vetor na horizontal com \t.
Calcular a média do vetor.
Quantos números são maiores que 10 e menores que 30.

Autor: Renata Pereira Martins Gomes
Data de criação: 05/07/2020
Data de Modificação: 05/07/2020
*/

#include <stdio.h>
#include <locale.h>

main()
{
	int vet[]={2,4,11,32,81,21,9,16};
	int i, media,soma=0;
	maior10=0;
	maior=vet[0];
	for (i=0;i<8;i++)
	{
		printf("%d\t",vet[i]);
		soma=soma+vet[i];
		
		if(vet[i]>10 && vet[i]<30)
		{
			maior10++;
		}
		if(maior<vet[i])
		{
			maior=vet[i];
		}
	}
	media=soma/8;
	printf("\nMedia: %d - maiores que 10: %d", media, maior10);
	
}
	

