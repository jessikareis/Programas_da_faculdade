/*Autora:J�ssika Reis de Mello.
Programa: Se voc� lembrar bem,quando estudamos as vari�veis do tipo caractere, 
char,dissemos que,na verdade,ela eram representadas por inteiros de 0 at� 255.
Crie um programa que mostre a tabela completa do c�digo ASCII.
*/

#include<stdio.h>
main()
{
	int x=0;
	
	printf("Tabela ASCII:");
	while(x <= 255)
	{
		printf("\n%d = %c\n", x, x);
		x++;
	}
}

/*outro modelo:
#include<stdio.h>
main()
{
	int x=0;
	
	printf("Tabela ASCII:");
	while(x <= 255)
	{
		if(x%10==0)
		printf("\n");
		printf("%d = %c\t", x, x);
		x++;
	}
}
*/
