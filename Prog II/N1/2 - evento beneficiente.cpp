/*Criador: J�ssika Reis de Mello.
Porva N1 - Prog II
Data de cria��o:29/09/2020.
Programa:2- Fa�a um programa em C para registrar as doa��es realizadas no evento
beneficente Baile da 3� idade. Os dados a serem registrados s�o: Nome,
Sexo e Valor da doa��o. (3,0)
Ao final das inscri��es o programa dever� exibir:
a) A quantidade de pessoas que doaram acima de 50 reais.
b) A m�dia do valor da doa��o por pessoa.
Obs.: O evento ser� "fechado" e ter� a participa��o de apenas 150
convidados.*/

#include<stdio.h>
#include<locale.h>
#include<math.h>
#include <string.h>

main()
{
 
    char nome[3][100], sexo;
    float valor=0, total=0, media=0, maior=0;
    int i;

    setlocale(LC_ALL,"portuguese");
    printf("\n\t******Baile da 3� idade******");

    for(i=0; i<3; i++)
    {

    printf("\nNome: ");
    fflush(stdin);
    scanf("%s",&nome[i]);

    printf("Digite seu sexo, F = Feminino ; M = Masculino: ");
    fflush(stdin);
    scanf("%c", &sexo);

    printf("Valor da doa��o: ");
    fflush(stdin);
    scanf("%f",&valor);
   
     

    if(valor>=50){
        maior++;
    }
    
      total=total+valor;

    printf("\n");
    }
		
	media=total/3;   

    printf("\n\t*****Evento Beneficiente Baile da 3� idade******\n");
    printf("\nQuantidade de pessoas que doaram acima 50,00: %0.2f", maior);
    printf("\nValor total: %0.2f\n",total);
    printf("\nM�dia da doa��o: %0.2f", media );
}
