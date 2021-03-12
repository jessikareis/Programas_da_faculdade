/* Faça um programa que ordene um vetor inteiro de 10 posições.

*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
main()
{
    int vet[10];
    int i,k,aux,cont=0;
    srand(time(NULL));

//construir um vetor

for(i=0;i<10;i++)
{
vet[i]=rand()%100;
printf("%d\t",vet[i]);
}
//ordenar o vetor e comparar as posições dentre os vetores
// usar 2 for
// 5 2 4 6 3
// 0 1 2 3 4 = posição de i

for(i=0;i<10;i++) //pega o elemento começando de zero
{
for(k=i+1;k<10;k++)
{
if(vet[i]>vet[k])
{
printf("\n%d\t X %d\t X %d",vet[i],vet[k],cont+1);
aux=vet[i]; //guarda na auxiliar
vet[i]=vet[k];
vet[k]=aux;
cont++;


}
}
}

printf("\n\n");

//imprimir o vetor
for(i=0;i<10;i++)
{
printf("%d\t",vet[i]);

}
printf(" \n%d trocas feitas",cont); // numero de trocas

}
