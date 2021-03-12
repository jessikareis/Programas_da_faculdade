/*Programa: Faça um programa em C para validar a senha informada pelo usuário. (inserir cpf, nome, e-mail, e senha ) e cria a função para validar a senha.
Autora: Jéssika Reis de Mello
Data de criação:13/09/2020.*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
main()
{
	char nome[30], cpf[11], email[30], s1[15], s2[15]; 
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite seu CPF: ");
	gets(cpf);
	printf("\n Digite seu nome? ");
	gets(nome);
	printf("\nDigite seu e-mail: ");
	gets(email);
	
	while(true)
	{
		printf("\nDigite uma senha: ");
		fflush(stdin);
		gets(s1);
		printf("\nConfirme sua senha: ");
		fflush(stdin);
		gets(s2);	
		if(strcmp(s1,s2)==0) 
		{
			printf("\n\n****Cadastro realizado com sucesso!****");
			break;
		}
		if(strcmp(s1,s2)==1) printf("\n\nAs senhas inválidas");
	}
	printf("\n\n--------------------------------------------------------");
	printf("\n\nNome: %s", nome);
	printf("\nCpf: %s", cpf);
	printf("\nE-mail: %s", email);
	printf("\nSenha: %s", s1);
}
