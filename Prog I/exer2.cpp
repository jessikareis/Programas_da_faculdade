/* Preencher um vetor de 8 elementos inteiros. 
Mostrar o vetor na horizontal com \t. 
Calcular a m�dia do vetor. 
Quantos n�meros s�o maiores que 10 e menores que 30. 
Qual o maior n�mero do vetor.

Autor: Renata Pereira Martins Gomes
Data de cria��o: 05/07/2020
Data de Modifica��o: 05/07/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
main()
{
        int vet[10];
        int i, media, soma, maior, maior10;
        srand(time(NULL));
        soma=0;
        maior10=0;
        //preenche o vetor e imprime na horizontal
        for (i=0; i< 10; i++)
        {
            vet[i]=rand()%50;
            printf("%d\t", vet[i]);
        }
        maior=vet[0];
        printf("\n");
        
        //preenche o vetor e imprime na horizontal, decrementa o valor do vetor
        for (i=9; i>=0; i--)
        {
            printf("%d\t", vet[i]);
            soma=soma+vet[i];
            if (vet[i]>10 && vet[i]<30)
            {
                maior10++;
            }
            if (maior < vet[i])
            {
                maior=vet[i];
            }
        }
        media=soma/10;
        printf("\nMedia: %d - maiores que 10: %d", media,maior10);
    
}
