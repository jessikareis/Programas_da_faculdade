/* Programa: Modelo de estrutura em (aluno) vetor
Autor: Anselmo Pestana R. Costa
Data de criação: 09/06/2020
Data de Modifocação: 09/06/2020
*/
#include <stdio.h>
#include <conio.h>
#include<locale.h>
int main(void)
{
	// Para usar acento
	setlocale(LC_ALL,"");
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
	  printf("Nome do aluno ......: ");
	  fflush(stdin);
	  
	  /*usaremos o comando fgets() para ler strings, no caso o nome
	  do aluno e a disciplina
	  fgets(variavel, tamanho da string, entrada)
	  como estamos lendo do teclado a entrada é stdin (entrada padrão),
	  porém em outro caso, a entrada tambem poderia ser um arquivo */
	  
	  fgets(aluno[i].nome, 40, stdin);
	  
	  printf("Disciplina ......: ");
	  fflush(stdin);
	  fgets(aluno[i].disciplina, 40, stdin);
	  
	  printf("Informe a 1a. nota ..: ");
	  
	  scanf("%f", &aluno[i].nota_prova1);
	  
	  printf("Informe a 2a. nota ..: ");
	  scanf("%f", &aluno[i].nota_prova2);
	  aluno[i].media=(aluno[i].nota_prova1+aluno[i].nota_prova2)/2;
	} 
	for (int i=0; i<2;i++) 
	{
	  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
	  printf("Nome ...........: %s", aluno[i].nome);
	  printf("Disciplina .....: %s", aluno[i].disciplina);
	  printf("Nota da Prova 1 ...: %.2f\n" , aluno[i].nota_prova1);
	  printf("Nota da Prova 2 ...: %.2f\n" , aluno[i].nota_prova2);
	  printf("Média %.2f", aluno[i].media );
	  
	 
	}
	getch();
  	return(0);
}
