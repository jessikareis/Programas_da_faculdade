/*17. Fa�a um Programa para um caixa eletr�nico. O programa dever� perguntar ao usu�rio a valor do
saque e depois informar quantas notas de cada valor ser�o fornecidas. As notas dispon�veis
ser�o as de 1, 5, 10, 50 e 100 reais. O valor m�nimo � de 10 reais e o m�ximo de 600 reais. 
O programa n�o deve se preocupar com a quantidade de notas existentes na m�quina.
.Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100,
uma nota de 50, uma nota de 5 e uma nota de 1;
a.Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece tr�s notas de 100,
uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.*/

#include<stdio.h>
#include<locale.h>
main()
{
	int valor, cem, cinq, dez, cinco, um;
	
	setlocale(LC_ALL,"portuguese");
	printf("\nAten��o: *O valor m�nimo para saque � 10 reais e o m�ximo 600 reias.*\n");
	printf("\nQuanto deseja retirar?");
	scanf("%i", &valor);
	
	if(valor>10 && valor<600)
		{
			cem=valor/100;
			cinq=(valor-(cem*100))/50;
			dez=(valor-(cem*100)-(cinq*50))/10;
			cinco=(valor-(cem*100)-(cinq*50)-(dez*10))/5;
			um=(valor-(cem*100)-(cinq*50)-(dez*10)-(cinco*5));
			
			printf("\nSer� fornecido:");
			
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
				printf("\nValor indispon�vel. ");	
		
}
