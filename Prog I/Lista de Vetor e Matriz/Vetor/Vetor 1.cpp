/*Vetor
01)Preencher um vetor com números inteiros(8unidades); solicitar um número do
teclado. Pesquisar se esse número existe no vetor. Se existir, imprimir em qual
posição do vetor. Se não existir, imprimir MSG que não existe

Criadora: Jéssika Reis de Mello*/

#include<stdio.h>
#include<locale.h>
main()
{
	int num, x, l=0;
	int y[8]={6, 9, 4, 7, 2, 8, 4, 3};
	
	setlocale(LC_ALL,"portuguese");
	printf("Qual número deseja encontrar? \n");
	scanf("%d", &num);
	x=0;
	
	while(x<=8)
	
	{
		if(y[x]==num)
		{ printf("O número está na posição %d.\n", x);
			l++	;	
		}
		x++;	
	}
	if(l==0) 
	printf("O número não existe no vetor!");
}
