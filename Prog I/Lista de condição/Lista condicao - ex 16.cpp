//16. Fa�a um Programa para leitura de tr�s notas parciais de um aluno. 
//O programa deve calcular a m�dia alcan�ada por aluno e presentar:
//. A mensagem "Aprovado", se a m�dia for maior ou igual a 7, com a respectiva m�dia alcan�ada;
//a. A mensagem "Reprovado", se a m�dia for menor do que 7, com a respectiva m�dia alcan�ada;
//b. A mensagem "Aprovado com Distin��o", se a m�dia for igual a 10.

#include<stdio.h>
main()

{
	float n1, n2, n3, media;
	printf ("Digite a n1:");
	scanf ("%f", &n1);
	printf ("Digite a n2:");
	scanf ("%f", &n2);
	printf ("Digite a n3:");
	scanf ("%f", &n3);
	media= (n1+n2+n3)/3;
		if(media>=7 && media <10)
		printf ("Aprovado com media %.2f", media);
	else
		if (media==10)
		printf("Aprovado com distin��o");
		
	else
	printf("Reprovado");
}
