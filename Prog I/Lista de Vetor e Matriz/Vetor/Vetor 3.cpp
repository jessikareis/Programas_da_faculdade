/*Vetor
3)Preencher um vetor com os números impares do número 2 a 20
Preencher um vetor com os números de 10 a 19. Somar os vetores acima.
Criadora: Jéssika reis de Mello*/

#include<stdio.h>
#include<locale.h>
main()

{
	int a=2, i=0, x=0, y;
	int p[20]={}, v[20]={};
	
	while (a<=20)
	{
		if (a%2==1)
		{
			p[i]=a;	
			setlocale(LC_ALL,"portuguese");
			printf("%i\t", p[i]);		
			i++;											
		}		
	a++;
	}
	printf("\n");	
	for(y=10; y<20; y++)
	{
		v[x]=y;		
		printf("%i\t", v[x]);
		x++;
    }
    printf("\n");
     for(y=0;y<10;y++)
     {
     	printf("%d\t", p[y]+v[y]);
	 }
 }
