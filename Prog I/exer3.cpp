/* Preencher um vetor de 8 elementos inteiros. 
Mostrar o vetor na horizontal com \t. 
Calcular a média do vetor. 
Mostrar o menor elemento do vetor.
Qual o maior número do vetor.

Autor: Renata Pereira Martins Gomes
Data de criação: 05/07/2020
Data de Modificação: 05/07/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
main()
{
        int vet[10];
        int i, media, soma, menor, maior10;
        srand(time(NULL));
        soma=0;
        maior10=0;
        //preenche o vetor e imprime na horizontal
        for (i=0; i< 10; i++)
        {
            vet[i]=rand()%50;
            printf("%d\t", vet[i]);
        }
        menor=vet[0];
        printf("\n");
        
        //preenche o vetor e imprime na horizontal, decrementa o valor do vetor
        for (i=9; i>=0; i--)
        {
            printf("%d\t", vet[i]);
            soma=soma+vet[i];
            
            //
            if (vet[i]>10 && vet[i]<30)
            {
                maior10++;
            }
            
            if (menor > vet[i])
            {
                menor=vet[i];
            }
        }
        media=soma/10;
        printf("\nMedia: %d - menor valor: %d - valor entre 10 e 30: %d ", media,menor, maior10);
    
}
