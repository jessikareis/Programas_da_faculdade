/*Vetor
5)Preencher um vetor com 3 nomes com 20 letras no máximo cada. Imprimir os
Nomes

Criadora: Jéssika Reis de Mello*/

#include<stdio.h>
#include<locale>
main()
{
	
	char m[60]={"Jéssika, Guilherme e Júnior"};
	int x;
	
	setlocale(LC_ALL,"portuguese");
	for (x=0;x<60;x++)
	printf("%c",m[x]);
}
