/*
Autora: J�ssika Reis de Mello
Programa: 3- Escreva um aplicativo em C que recebe um n�mero inteiro e 
mostre os n�meros pares e �mpares, separados por v�rgula de 1 at� esse inteiro.
*/

#include<stdio.h>
#include<locale.h>
int main()
{
        int num, x=1;

        setlocale(LC_ALL,"portuguese");
		printf("Digite um n�mero inteiro: ");
        scanf("%d", &num);

        while(x <= num)
        {
            if(x%2 == 1)
            printf("\n%d,",x); //Caso deseje mostrar em linha reta todos os n�meros, basta retirar o \n e compilar//
            
			else
            printf(" %d, ",x);

            x++;
        }
}
