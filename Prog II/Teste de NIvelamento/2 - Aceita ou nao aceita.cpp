/*Criador: Jéssika Reis de Mello.
Programa:Faça um programa em C para obter o nome, sexo e idade. Se for feminino e idade menor que 25, 
imprimir o nome da pessoa e a palavra ACEITA. Caso contrário, imprimir NAO ACEITA.
Data de criação:30/06/2020.*/
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
