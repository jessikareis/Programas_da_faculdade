/*
Autora: J�ssika Reis de Mello
Programa: 1- Escreva um programa em C que mostre todos os n�meros �mpares de 1 at� 100.
*/

#include<stdio.h>
#include<locale.h>
main()
{
    int i;
    for (i=0;i<=100;i++)
    {
        if (i%2!=0)
        {
        	setlocale(LC_ALL,"portuguese");
            printf("N�meros �mpares de 0 at� 100= %d\n", i);
        }
    }

}
