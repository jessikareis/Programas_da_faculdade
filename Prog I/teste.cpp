//1. Fa�a um programa que gere aleatoriamente dez n�meros entre 20 e 50 e apresente a soma destes n�meros.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int n1, s1=0, cont=0;
	srand (time(NULL));
	printf("Soma\n");
	while(cont<10)
	{
		n1=(rand()%31)+20;
		s1=s1+n1;
		printf("%d \n", n1);
		cont++;
	}

	printf("Soma total = %d", s1);
}
