//3. Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular
//a média alcançada do aluno e apresentar:
//o A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
//o A mensagem "Reprovado", se a média for menor do que sete;
//o A mensagem "Aprovado com Distinção", se a média for igual a dez.

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
		printf("Aprovado com distinção");
		
	else
	printf("Reprovado");
}
