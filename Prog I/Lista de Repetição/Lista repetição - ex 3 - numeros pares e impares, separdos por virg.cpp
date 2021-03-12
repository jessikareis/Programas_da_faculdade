/*
Autora: Jéssika Reis de Mello
Programa: 3- Escreva um aplicativo em C que recebe um número inteiro e 
mostre os números pares e ímpares, separados por vírgula de 1 até esse inteiro.
*/

#include<stdio.h>
#include<locale.h>
int main()
{
        int num, x=1;

        setlocale(LC_ALL,"portuguese");
		printf("Digite um número inteiro: ");
        scanf("%d", &num);

        while(x <= num)
        {
            if(x%2 == 1)
            printf("\n%d,",x); //Caso deseje mostrar em linha reta todos os números, basta retirar o \n e compilar//
            
			else
            printf(" %d, ",x);

            x++;
        }
}
