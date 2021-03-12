/* Programa: Preencher um veotr de 5 elementos inteiros, solicitads
no teclado e mostrar outro vetor com o cubo dos numeros do primeiro vetor
Autor: Kesia Campos
Criação: 12/05/2020
atualização:2/05/2020
*/
#include <stdio.h>
#include <math.h>
main()
{
	int m1[3][3], m2[3][3];
	int l,c;
	printf("\n\n");
	for(l=0; l<3; l++)
	{
		for (c=0; c< 3; c++)	
			{
				printf("Digite o valor da posicao %dX%d: ",l,c);
				scanf("%d",&m1[l][c]);
			}
	}
	for(l=0; l<3; l++)
	{
		for (c=0; c< 3; c++)	
			{
				printf("%d\t",m1[l][c]);
			}
		printf("\n\n");
	}
}


