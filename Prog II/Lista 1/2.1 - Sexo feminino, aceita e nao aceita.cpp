/*Criador: Jéssika Reis de Mello.
Lista 1
Programa: 2- DECISÃO
2.1) Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25. 
Imprimir o nome da pessoa e a palavra ACEITA. Caso contrario imprimir NAO ACEITA.
Data de criação:31/08/2020.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()

{
	char nome[20], sexo;
	int idade;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("Digite seu sexo, F = Feminino ; M = Masculino: ");
	scanf("%c", &sexo);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("\n\nResultado: ");
	if(sexo == 'F' || sexo == 'f' && idade <25 )
		printf("\n%s ACEITA", nome);
			else
				printf("\n NAO ACEITA");
}
