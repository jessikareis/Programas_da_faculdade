//3. Fa�a um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular
//a m�dia alcan�ada do aluno e apresentar:
//o A mensagem "Aprovado", se a m�dia alcan�ada for maior ou igual a sete;
//o A mensagem "Reprovado", se a m�dia for menor do que sete;
//o A mensagem "Aprovado com Distin��o", se a m�dia for igual a dez.

#include<stdio.h>
main()

{
	float n1, n2, media;
	printf ("Digite a n1:");
	scanf ("%f", &n1);
	printf ("Digite a n2:");
	scanf ("%f", &n2);
	media= (n1+n2)/2;
		if(media>=7 && media <10)
		printf ("Aprovado com media %.2f", media);
	else
		if (media==10)
		printf("Aprovado com distin��o");
		
	else
	printf("Reprovado");
}
