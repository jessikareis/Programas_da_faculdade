/*
Autora: Jéssika Reis de Mello
Programa: 1- Escreva um programa em C que mostre todos os números ímpares de 1 até 100.
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
            printf("Números ímpares de 0 até 100= %d\n", i);
        }
    }

}
