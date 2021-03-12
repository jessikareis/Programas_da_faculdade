/* 
Prog: Receber do teclado uma mensagem e imprimir quantas letras A, E, I, O, U tem esta mensagem.
Considerar minúscula e maiúscula. A função em portugol que acessa letra por letra de uma palavra é
strlem(variavel,x). (x é a posição da letra na frase)
Exemplo:
curso = "curso de redes"
Imprimir strelem(curso,3) ==> irá imprimir a letra s, pois a posição da
primeira letra da palavra curso é 0. a segunda é 1, a terceira é 2 e assim
sucessivamente.
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atualização: 01/01/2017
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main()
{
	int x,tam;
	int a,e,i,o,u;
	char nome[30];
	// inicializei todas as variaveis com zero porque sao contadores
	a = e = i = o = u = 0;
	printf("Digite uma frase: ");
	gets(nome);
	tam = strlen(nome);
	for (x=0; x < tam; x++)
	{
		if (nome[x] == 'a' || nome[x] == 'A')
			a++;
		else
			if (nome[x] == 'e' || nome[x] == 'E')
				e++;
			else
				if (nome[x] == 'i' || nome[x] == 'I')
					i++;
				else
					if (nome[x] == 'o' || nome[x] == 'O')
						o++;
					else
						if (nome[x] == 'u' || nome[x] == 'U')
							u++;
	}
	printf("\n\nA frase tem:\n");
	printf("\n%d letra a",a);
	printf("\n%d letra e",e);
	printf("\n%d letra i",i);
	printf("\n%d letra o",o);
	printf("\n%d letra u",u);
	printf("\n\n");
	system("pause");
	return 0;
}
