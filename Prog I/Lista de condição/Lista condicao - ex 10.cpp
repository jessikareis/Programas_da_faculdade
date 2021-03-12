//10. Faça um Programa que leia um número e exiba o dia correspondente da semana. 
//(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
#include<stdio.h>
#include<locale.h>
main()

{
	
	int n;
	
		setlocale(LC_ALL,"portuguese");
		printf("Digite um número de 1 a 7:");
		scanf("%d", & n);
		
  	if (n==1)
 {
    printf("Domingo\n");
  }
  else
  	if(n==2)
  	{
  		printf("Segunda-feira\n");
	  }
	  else
	if(n==3)
	{
		printf("Terça-feira\n");
	}
	else
	if(n==4)
	{
		printf("Quarta-feira\n");
	}
	else
	if(n==5)
	{
		printf("Quinta-feira\n");
	}
	else
	if(n==6)
	{
		printf("Sexta-feira\n");
	}

  	else 
 	 if (n==7) 
 	 {
    printf("Sábado\n");
 	 }
 
  else 
  {
    printf("Valor digitado errado\n");
  }


}
