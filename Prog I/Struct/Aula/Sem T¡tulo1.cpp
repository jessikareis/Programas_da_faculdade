/*Autor: Igor Sezinando Silva

Data de criação: 19/05/2020

Ultima atualização: 19/05/2020

*/

#include<locale.h>

#include<stdio.h>

#include<stdlib.h>

main()

{

	setlocale(LC_ALL,"portuguese");

	float h,peso,total,total1;

	char sexo;

	

	

	printf("Digite a altura: ");

	scanf("%f",&h);

	printf("Digite o peso: ");

	scanf("%f",&peso);

	printf ("Digite [f] para feminino e [m] masculino: ");

	scanf("%c%",&sexo);

	

	do

	{

		total=72.7*h-58;

		printf("O peso ideal é: %.2f\n",total);

		break;

	}

	while (sexo='m');

	do

	{

		total1=62.1*h-44.7;

		printf("O peso ideal é: %.2f\n",total1);

		break;

	}

	while (sexo='f');

	system("pause");

}


