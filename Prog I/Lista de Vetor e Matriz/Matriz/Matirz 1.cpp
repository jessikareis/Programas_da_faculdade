/*MATRIZ
01)Ler um vetor vet de 10 elementos e obter um vetor quadrado cujos
componentes deste vetor s�o o quadrado dos respectivos componentes de vet. 

Criadora:J�ssika Reis de Mello
*/

#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	int x;
	int vet[10], quad[10];
	 
	for (x=0;x<10; x++)
	{	
		setlocale(LC_ALL,"portuguese");
		printf("Digite o n�mero %d:\n ",x+1);
		scanf("%d", &vet[x]);
		quad[x] = pow(vet[x],2);
	}
	printf(" O vetor vet:\t\t");
	for(x=0;x<10;x++) printf("%i\t", vet[x]);
	printf("\nO vetor ao quadrado:\t");
	for(x=0;x<10;x++) printf("%i\t", quad[x]);
}
