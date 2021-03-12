/* Programa: Modelo de estrutura em (aluno)
Autor: Anselmo Pestana R. Costa
Data de criação: 09/06/2020
Data de Modifocação: 09/06/2020
*/
#include <stdio.h>
#include <conio.h>
main()
{
  /*Criando a struct */
  struct Taluno
  {
    char nome[50];
    char disciplina[30];
    float nota_prova1;
    float nota_prova2;
    float media;
  };
  /*Criando a variável aluno que será do
  tipo struct ficha_de_aluno */
  struct Taluno aluno;  
  printf("\n---------- Cadastro de aluno -----------\n\n\n");
  printf("Nome do aluno ......: ");
  fflush(stdin);
  /*usaremos o comando gets() para ler strings, no caso o nome
  do aluno e a disciplina*/
  gets(aluno.nome);
  printf("Disciplina ......: ");
  fflush(stdin);
  gets(aluno.disciplina);
  printf("Informe a 1a. nota ..: ");
  scanf("%f", &aluno.nota_prova1);
  printf("Informe a 2a. nota ..: ");
  scanf("%f", &aluno.nota_prova2);
  aluno.media=(aluno.nota_prova1+aluno.nota_prova2)/2;
  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
  printf("Nome ...........: %s\n", aluno.nome);
  printf("Disciplina .....: %s\n", aluno.disciplina);
  printf("Nota da Prova 1 ...: %.2f\n" , aluno.nota_prova1);
  printf("Nota da Prova 2 ...: %.2f\n" , aluno.nota_prova2);
  printf("Media.......... ...: %.2f\n" , aluno.media);
  getch();
  return(0);
}
