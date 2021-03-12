/* Programa: Modelo de estrutura em (aluno) com type def
Autor: Anselmo Pestana R. Costa
Data de criação: 09/06/2020
Data de Modifocação: 09/06/2020
*/
#include <stdio.h>
#include <conio.h>
int main(void)
{
  	/*Criando a struct */
  	typedef struct 
  	{
    	char nome[50];
    	char disciplina[30];
    	float nota_prova1;
    	float nota_prova2;
    	float media;
  	} ficha_de_aluno; 
  	/*Criando a variável aluno que será do
  	tipo struct ficha_de_aluno */
  	ficha_de_aluno aluno[2]; 
 	printf("\n---------- Cadastro de aluno -----------\n\n\n");
	for (int i=0; i<2; i++)
	{
	  printf("Nome do aluno %d......: ", i+1);
	  fflush(stdin);
	  /*usaremos o comando gets() para ler strings, no caso o nome
	  do aluno e a disciplina
	  */
	  gets(aluno[i].nome);
	  printf("Disciplina ......: ");
	  fflush(stdin);
	  gets(aluno[i].disciplina);
	  printf("Informe a 1a. nota ..: "); 
	  scanf("%f", &aluno[i].nota_prova1); 
	  printf("Informe a 2a. nota ..: ");
	  scanf("%f", &aluno[i].nota_prova2);
	}
	
	for (int i=0; i<2; i++)
	{
	  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
	  printf("Nome ...........: %s", aluno[i].nome);
	  printf("Disciplina .....: %s", aluno[i].disciplina);
	  printf("Nota da Prova 1 ...: %.2f\n" , aluno[i].nota_prova1);
	  printf("Nota da Prova 2 ...: %.2f\n" , aluno[i].nota_prova2);
	}
	getch();
  	return(0);
}
