/* Programa: criar uma matriz de inteiros de 3 X 3 e imprimir no formato
x	x	x	
x	x	x	
x	x	x	
Autor: Anselmo
Cria��o: 12/05/2020
atualiza��o:2/05/2020
*/
#include<stdio.h>
main()
{
	int mat[3][3];
	int l,c;
	for (l=0; l<3;l++)
	{
		for(c=0; c<3; c++)
		{
			printf("Digite o valor da posicao %dX%d: ",l,c );
			scanf("%d", &mat[l][c]);
		}
	}
	for (l=0; l < 3; l++)
	{
		for(c=0; c<3; c++)
		{
			printf("%d\t",mat[l][c] );
		}
		printf("\n");
	}	
}
