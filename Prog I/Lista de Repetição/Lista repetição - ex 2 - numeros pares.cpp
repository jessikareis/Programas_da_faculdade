/*
Autora: J�ssika Reis de Mello
Programa: 2-Escreva um programa em C que mostre todos os n�meros pares de 1 at� 100.
*/

#include<stdio.h>
#include<locale.h>
main()
{
    int i;
    for (i=0;i<=100;i++)
    {
        if(i%2==0)
        {
        	setlocale(LC_ALL,"portuguese");
            printf("N�meros pares de 0 at� 100= %d\n", i);
        }
    }

}
