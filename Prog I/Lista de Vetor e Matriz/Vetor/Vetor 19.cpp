/*Vetor
19)Preencher um vetor com 5 n�meros inteiros, solicitados no teclado e mostrar
outro vetor com o cubo dos n�meros do primeiro vetor.
J�ssika Reis de Mello*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	int y=5, z;
	int x[y], w[y];
	
	setlocale(LC_ALL, "portuguese");
	printf("Informe um valor ao vetor!\n ");
	for(z=0;z<y;z++)
	{
		printf("\nInforme [%d]:  ", z);
		scanf("%d", &x[z]);
		w[z]=pow(x[z],3);
	}
	printf("\nVetor Digitado: \n");
	for(z=0;z<y;z++)	
	printf("%i\t", x[z]);
    printf("\nVetor ao cubo: \n");
    
	for(z=0;z<y;z++)
	printf("%i\t", w[z]);
	 
	
	
}
