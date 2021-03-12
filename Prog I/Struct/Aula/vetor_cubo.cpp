/* Programa: Preencher um vetor de 5 elementos inteiros, solicitads
no teclado e mostrar outro vetor com o cubo dos numeros do primeiro vetor
Autor: Kesia Campos
Criação: 12/05/2020
atualização:2/05/2020
*/
#include <stdio.h>
#include <math.h>
main()
{
	int v1[5], v2[5];
	int i=0;
	
	while (i<5)
	{
		printf("Digite o valor da posicao %d: ",i);
		scanf("%d",&v1[i]);
		i++;
	}
	for (i=0; i<5; i++)
	{
		printf("%d\t",v1[i]);
	}
	printf("\n");
	for (i=0; i<5; i++)
	{
		v2[i]=pow(v1[i],3);
		printf("%d\t", v2[i]);
	}	
}


