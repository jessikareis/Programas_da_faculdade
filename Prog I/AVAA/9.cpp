//Criador: Matheus Muniz Vantil Da Costa.
//Programa:Calcular valor a ser pago num posto de combustível
//Data de criação:14/06/2020.
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float litros, valor, desconto;
	char cc[2];
	int x=0, y=0;
	
	printf("Preços: Gasolina = R$4,70\tÁlcool = R$3,80.");
	printf("\n--------------------------------------------------");
	printf("\nDescontos Álcool:\nAté 20 litros ------- 2%% por litro ");
	printf("\nacima de 20 litros -- 4%% por litro ");
	printf("\n\nDescontos Gasolina:\nAté 20 litros ------- 3%% por litro ");
	printf("\nacima de 20 litros -- 5%% por litro ");
	while(x==0)
	{
		printf("\n\nDeseja Gasolina ou Álcool? (Responda com G ou A).");
		setbuf(stdin,NULL);
		gets(cc);
		if (strcmp (cc,"g") == 0 || strcmp (cc,"G") == 0)	x++;
		if (strcmp (cc,"a") == 0 || strcmp (cc,"A") == 0)	x=x+2;
	}
	system("cls");
	switch (x)
	{
		case 1 :
				printf("\n\t\tGasolina");
				break;
		case 2 :
				printf("\n\t\tÁlcool");
				break;			
	}

	printf("\n\nQuanto foi abastecido? ");
	setbuf(stdin,NULL);
	scanf("%f", &litros);	
	if(x==1)
	{
		
		if(litros<=20) 
		{
			desconto=4.7*0.03;
			valor=(4.7-desconto)*litros;
		}
		if(litros>20) 
		{
			desconto=4.7*0.05;
			valor=(4.7-desconto)*litros;
		}
	}
	if(x==2)
	{
		if(litros<=20) 
		{
			desconto=3.8*0.02;
			valor=(3.8-desconto)*litros;
		}
		if(litros>20) 
		{
			desconto=3.8*0.04;
			valor=(3.8-desconto)*litros;
		}
	}	
	
	printf("Valor a pagar = R$%.2f.", valor);
}
