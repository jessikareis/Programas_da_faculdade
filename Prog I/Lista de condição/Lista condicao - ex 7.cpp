//7. Fa�a um Programa que leia tr�s n�meros e mostre-os em ordem decrescente.

#include <stdio.h>
#include<locale.h>

main()
{
	int n1, n2, n3;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite o primeiro n�mero:\n");
	scanf("%d",&n1);
	
	printf("Digite o segundo n�mero:\n");
	scanf("%d",&n2);
	
	printf("Digite o terceiro n�mero:\n");
	scanf("%d",&n3);
	
if(n1<=n2 && n2<=n3)
	printf("A ordem dos n�meros em decrescente �:%d %d %d", n3,n2,n1);
if(n1<=n3 && n3<=n2)
	printf("A ordem dos n�meros em decrescente �: %d %d %d", n3, n1, n2);
if(n2<=n1 && n1<=n3)
	printf("A ordem dos n�meros em decrescente �: %d %d %d", n3, n2, n1);
if(n2<=n3 && n3<=n1)
	printf("A ordem dos n�meros em decrescente �: %d %d %d", n1, n3, n2);
if(n3<=n1 && n1<=n2)
	printf("A ordem dos n�meros em decrescente �: %d %d %d", n2, n1, n3);
if(n3<=n2 && n2<=n1)
	printf("A lista de n�meros decrescente �: %d %d %d", n1, n2, n3);
	
}
