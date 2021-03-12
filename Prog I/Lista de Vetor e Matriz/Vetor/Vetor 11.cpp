/*Vetor
11)Armazenar em Vetores, Nomes e Notas PR1 e PR2 de 6 alunos. Calcular a média
de cada aluno e imprimir aprovado se a média for maior que 5 e reprovado se
média for menor ou igual a 5. OBS.: 2 vetores para as notas tipo float. 1 vetor para
os nomes. 1 vetor para a média. 1 vetor para situação. 

Jéssika Reis de Mello*/

#include<stdio.h>
#include<locale.h>
#define alunos 6

main()
{
	float nota=0; 
	int x, y;
	char nomes[alunos][20];
	float pr1[alunos], pr2[alunos], med[alunos];
	
	setlocale(LC_ALL,"portuguese");
	printf("Serão %i alunos.\n", alunos);
	for(x=0;x<alunos;x++)
	{
		printf("\nDigite o nome do %iº aluno: ", x+1);
		gets(nomes[x]);
		
		printf("\nDigite sua 1º nota: ");
		scanf("%f", &pr1[x]);
		
		printf("\nDigite sua 2º nota: ");
		scanf("%f", &pr2[x]);
		
		med[x]=(pr1[x]+pr2[x])/2;
		setbuf(stdin,NULL);
	}
	printf("\nNome\t\tMédia\t\tSituação");
	for(x=0;x<alunos;x++)
	{
		printf("\n%s\t\t ", nomes[x]);
		if(med[x]>5) 
		printf("%.2f\t\tAPROVADO", med[x]);
		else 
		printf("%.2f\t\tREPROVADO", med[x]);
	}
}
