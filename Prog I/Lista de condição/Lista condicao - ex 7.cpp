//7. Faça um Programa que leia três números e mostre-os em ordem decrescente.

#include <stdio.h>
#include<locale.h>

main()
{
	int n1, n2, n3;
	
	setlocale(LC_ALL,"portuguese");
	printf("Digite o primeiro número:\n");
	scanf("%d",&n1);
	
	printf("Digite o segundo número:\n");
	scanf("%d",&n2);
	
	printf("Digite o terceiro número:\n");
	scanf("%d",&n3);
	
if(n1<=n2 && n2<=n3)
	printf("A ordem dos números em decrescente é:%d %d %d", n3,n2,n1);
if(n1<=n3 && n3<=n2)
	printf("A ordem dos números em decrescente é: %d %d %d", n3, n1, n2);
if(n2<=n1 && n1<=n3)
	printf("A ordem dos números em decrescente é: %d %d %d", n3, n2, n1);
if(n2<=n3 && n3<=n1)
	printf("A ordem dos números em decrescente é: %d %d %d", n1, n3, n2);
if(n3<=n1 && n1<=n2)
	printf("A ordem dos números em decrescente é: %d %d %d", n2, n1, n3);
if(n3<=n2 && n2<=n1)
	printf("A lista de números decrescente é: %d %d %d", n1, n2, n3);
	
}
