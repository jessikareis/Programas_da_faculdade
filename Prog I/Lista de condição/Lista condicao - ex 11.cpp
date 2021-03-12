//11. Faça um programa que lê as duas notas parciais obtidas por um aluno numa 
//disciplina ao longo de um semestre, e calcule a sua média.#include<stdio.h>
//O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente 
//e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito 
//for D ou E.

#include<locale.h>
#include<math.h>
#include<stdlib.h>

main()

{
	float n1, n2, media;
	setlocale(LC_ALL,"portuguese");
	printf("Digite a N1:\n");
	scanf("%f", &n1);
	printf("Digite a N2:\n");
	scanf("%f", &n2);
	media=(n1+n2)/2;
	
	if(media>=9.0 && media<=10.0)
	{
	printf("\nNota 1:%4.2f",n1);
	printf("\nNota 2:%4.2f",n2);
	printf("\nMédia:%4.2f\n",media);
	printf("\nAprovado com conceito A");
	}
	
	if(media>=7.5 && media<=8.9)
	{
	printf("\nNota 1:%2.f",n1);
	printf("\nNota 2:%2.f",n2);
	printf("\nMédia:%4.2f\n",media);
	printf("\nAprovado com conceito B");
	}
	
	if(media>=6.0 && media<=7.4)
	{
	printf("\nNota 1:%2.f",n1);
	printf("\nNota 2:%2.f",n2);
	printf("\nMédia:%4.2f\n",media);
	printf("\nAprovado com conceito C");
	}
	
	if(media>=4.0 && media<=5.9)
	{
	printf("\nNota 1:%2.f",n1);
	printf("\nNota 2:%2.f",n2);
	printf("\nMédia:%4.2f\n",media);
	printf("\nReprovado com conceito D");
	}
	
	if(media>=0 && media<=3.9)
	{
	printf("\nNota 1:%2.f",n1);
	printf("\nNota 2:%2.f",n2);
	printf("\nMédia:%4.2f\n",media);
	printf("\nReprovado com conceito E");
	}
	

}


