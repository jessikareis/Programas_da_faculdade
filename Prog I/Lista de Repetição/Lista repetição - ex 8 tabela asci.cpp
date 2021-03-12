/*Autora:Jéssika Reis de Mello.
Programa: Se você lembrar bem,quando estudamos as variáveis do tipo caractere, 
char,dissemos que,na verdade,ela eram representadas por inteiros de 0 até 255.
Crie um programa que mostre a tabela completa do código ASCII.
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
