/*
Programa: Calcula media de 2 alunos
Autor: Anselmo Pestana Ribeiro Costa
Criação: 12/05/2020
Atualização: 12/05/2020
*/
#include <stdio.h>

int main() {
    float n1a1,n2a1,n3a1, media1;
    float n1a2,n2a2,n3a2, media2;
    printf("Digite a N1 do Aluno 1: ");
    scanf("%f", &n1a1);
    printf("Digite a N2 do Aluno 1: ");
    scanf("%f", &n2a1);
    printf("Digite a N3 do Aluno 1: ");
    scanf("%f", &n3a1);
    media1=(n1a1+n2a1+n3a1)/3;
    printf("Media %.2f \n", media1);
    // segundo aluno
    printf("Digite a N1 do Aluno 2: ");
    scanf("%f", &n1a2);
    printf("Digite a N2 do Aluno 2: ");
    scanf("%f", &n2a2);
    printf("Digite a N3 do Aluno 2: ");
    scanf("%f", &n3a2);
    media2=(n1a2+n2a2+n3a2)/3;
    printf("Media %.2f \n", media2);
}
