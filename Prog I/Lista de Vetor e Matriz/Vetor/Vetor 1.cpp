/*Vetor
01)Preencher um vetor com n�meros inteiros(8unidades); solicitar um n�mero do
teclado. Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual
posi��o do vetor. Se n�o existir, imprimir MSG que n�o existe

Criadora: J�ssika Reis de Mello*/

#include<stdio.h>
#include<locale.h>
main()
{
	int num, x, l=0;
	int y[8]={6, 9, 4, 7, 2, 8, 4, 3};
	
	setlocale(LC_ALL,"portuguese");
	printf("Qual n�mero deseja encontrar? \n");
	scanf("%d", &num);
	x=0;
	
	while(x<=8)
	
	{
		if(y[x]==num)
		{ printf("O n�mero est� na posi��o %d.\n", x);
			l++	;	
		}
		x++;	
	}
	if(l==0) 
	printf("O n�mero n�o existe no vetor!");
}
