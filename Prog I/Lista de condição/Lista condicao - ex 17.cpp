/*17. Faça um Programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do
saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis
serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. 
O programa não deve se preocupar com a quantidade de notas existentes na máquina.
.Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100,
uma nota de 50, uma nota de 5 e uma nota de 1;
a.Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100,
uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.*/

#include<stdio.h>
#include<locale.h>
main()
{
	int valor, cem, cinq, dez, cinco, um;
	
	setlocale(LC_ALL,"portuguese");
	printf("\nAtenção: *O valor mínimo para saque é 10 reais e o máximo 600 reias.*\n");
	printf("\nQuanto deseja retirar?");
	scanf("%i", &valor);
	
	if(valor>10 && valor<600)
		{
			cem=valor/100;
			cinq=(valor-(cem*100))/50;
			dez=(valor-(cem*100)-(cinq*50))/10;
			cinco=(valor-(cem*100)-(cinq*50)-(dez*10))/5;
			um=(valor-(cem*100)-(cinq*50)-(dez*10)-(cinco*5));
			
			printf("\nSerá fornecido:");
			
			if(cem==1)printf("\nR$ 100: %i nota", cem);
			else printf("\nR$ 100: %i notas", cem);
			
			if(cinq==1)printf("\nR$ 50: %i nota", cinq);
			else printf("\nR$ 50: %i notas", cinq);
			
			if(dez==1)printf("\nR$ 10: %i nota", dez);
			else printf("\nR$ 10: %i notas", dez);
			
			if(cinco==1)printf("\nR$ 5: %i nota", cinco);
			else printf("\nR$ 5: %i notas", cinco);
			
			if(um==1)printf("\nR$ 1: %i nota", um);
			else printf("\nR$ 1: %i notas", um);
			
		}
				else
				printf("\nValor indisponível. ");	
		
}
