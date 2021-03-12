/*Autora: Jéssika Reis de Mello
Programa:Escreva um programa que pergunte ao usuário quantos alunos 
tem na sala de aula. Em seguida, através de um laço while, peça ao usuário 
para que entre com as notas de todos os alunos da sala, um por vez. Por fim, 
o programa deve mostrar a média, aritmética, da turma.
*/
#include<stdio.h>
#include<locale.h>
main()
{
	int alunos=0, x=1;
	float nota, soma;
	
	setlocale(LC_ALL,"portuguese");
	printf("Números de alunos na sala:");
	scanf("%d", &alunos);
	
	while(x<=alunos)
	{
		printf("Nota do aluno %d:",x);
		scanf("%f", &nota);
		
		soma=soma+nota;
		x++;
	}
	printf("\nMédia aritmética da turma: %.2f", soma/alunos);
}
