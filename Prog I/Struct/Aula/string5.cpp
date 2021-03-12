/* 
Prog: Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25. Imprimir o nome da pessoa
e a palavra ACEITA. Caso contrario imprimir NAO ACEITA.
Autor: Anselmo Pestana R Costa
Data de Criação: 01/01/2017
Ult. Atualização: 01/01/2017
*/
#include <stdlib.h>
#include <stdio.h>
main()
{
	char nome[30], sexo;
	int idade;
	printf("Informe seu nome: ");
	gets(nome);
	printf("Informe seu sexo: ");
	scanf("%c",&sexo);
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	if (sexo == 'f' || sexo == 'F' && idade < 25)
	{
		printf("Information!!!!");
		printf("\n%s. ACEITA.\n\n", nome);
	}
	else
	{
		printf("Information!!!!");
		printf("\nNAO ACEITA.\n\n");
	}
	system("PAUSE");
	return 0;
}
