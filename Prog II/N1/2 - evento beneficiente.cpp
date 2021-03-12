/*Criador: Jéssika Reis de Mello.
Porva N1 - Prog II
Data de criação:29/09/2020.
Programa:2- Faça um programa em C para registrar as doações realizadas no evento
beneficente Baile da 3ª idade. Os dados a serem registrados são: Nome,
Sexo e Valor da doação. (3,0)
Ao final das inscrições o programa deverá exibir:
a) A quantidade de pessoas que doaram acima de 50 reais.
b) A média do valor da doação por pessoa.
Obs.: O evento será "fechado" e terá a participação de apenas 150
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
    printf("\n\t******Baile da 3ª idade******");

    for(i=0; i<3; i++)
    {

    printf("\nNome: ");
    fflush(stdin);
    scanf("%s",&nome[i]);

    printf("Digite seu sexo, F = Feminino ; M = Masculino: ");
    fflush(stdin);
    scanf("%c", &sexo);

    printf("Valor da doação: ");
    fflush(stdin);
    scanf("%f",&valor);
   
     

    if(valor>=50){
        maior++;
    }
    
      total=total+valor;

    printf("\n");
    }
		
	media=total/3;   

    printf("\n\t*****Evento Beneficiente Baile da 3ª idade******\n");
    printf("\nQuantidade de pessoas que doaram acima 50,00: %0.2f", maior);
    printf("\nValor total: %0.2f\n",total);
    printf("\nMédia da doação: %0.2f", media );
}
