/*Vetor
14) Preencher um vetor com 5 n�meros e a medida que for digitado o numero,
calcular o cubo e mostrar em outro vetor. Mostrar os dois vetores

J�ssika Reis de Mello*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	int y=6, z;
	int x[y], w[y];
	
	setlocale(LC_ALL, "portuguese");
	printf("D� um valor ao vetor.\n\n ");
	for(z=0;z<y;z++)
	{
		printf("Atribua [%d]: ", z);
		scanf("%d", &x[z]);
		w[z]=pow(x[z],3);
		printf("Valor ao cubo �: %i\n\n", w[z]);
	}
	
	printf("Vetor digitado:\n");
	for(z=0;z<y;z++)	
	printf("%i\t", x[z]);
    printf("\nVetor ao cubo:\n");
    
	for(z=0;z<y;z++)	
	printf("%i\t", w[z]);
}
