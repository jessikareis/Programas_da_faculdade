#include<stdio.h>
main()

{
	char letra;
	printf("Digite uma vogal:");
	scanf("%c", &letra);
	
	if (letra=='A' or letra=='E' or letra=='I' or letra=='O' or letra=='U')
	printf("Voce digitou uma vogal maiuscula");
	
	if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
	printf("Voce digitou uma vogal minuscula");
}
