/*Criador: J�ssika Reis de Mello.
Testa de Nivelamento Prog II
Programa:Fa�a  um programa em C para obter o Nome e pre�o dos 150 produtos da Cantina Bom Sabor. 
Ao final, o programa dever� exibir o produto mais caro, o valor total e a m�dia de pre�o.
Data de cria��o:25/08/2020.*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
 
	char nomes[150][100];
	float precos[150], total[150];
	int i,maior=0, menor=0, media;

	setlocale(LC_ALL,"portuguese");
	printf("\n\t******Cantina BomSabor******");
	for(i=0; i<150; ++i){
		
	printf("\nProduto %d\n",i+1);
	printf("Nome: ");
	scanf("%s",&nomes[i]);
	printf("Preco: ");
	scanf("%f",&precos[i]);

	total[i]=total[i]+precos[i];

	if(precos[i]>precos[maior]){
 	 maior=i;
 	}
	
	printf("\n");
}
	media=total[i]/i;
	
	printf("\n\t******Cantina BomSabor******");
	printf("Mais caro: %s | %0.2f\n",nomes[maior],precos[maior]);
	printf("\nValor total: %0.2f\n",total[i]);
	printf("\nM�dia: %0.2f", media);
}

