/*Autora: J�ssika Reis de Mello
Programa:Escreva um programa que pergunte ao usu�rio quantos alunos 
tem na sala de aula. Em seguida, atrav�s de um la�o while, pe�a ao usu�rio 
para que entre com as notas de todos os alunos da sala, um por vez. Por fim, 
o programa deve mostrar a m�dia, aritm�tica, da turma.
*/
#include<stdio.h>
#include<locale.h>
main()
{
	int alunos=0, x=1;
	float nota, soma;
	
	setlocale(LC_ALL,"portuguese");
	printf("N�meros de alunos na sala:");
	scanf("%d", &alunos);
	
	while(x<=alunos)
	{
		printf("Nota do aluno %d:",x);
		scanf("%f", &nota);
		
		soma=soma+nota;
		x++;
	}
	printf("\nM�dia aritm�tica da turma: %.2f", soma/alunos);
}
