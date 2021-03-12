/*Criador: Jéssika Reis de Mello.
Lista 1
Programa: 3- REPETIÇÃO
3.5) Solicitar um número entre 1 e 4. Se a pessoas digitar um número diferente, mostrar a
mensagem "entrada inválida" e solicitar o número novamente. Se digitar correto mostrar o número digitado.
Data de criação:31/08/2020.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	int n;
	while(n<1||n>4)
		{
			setlocale(LC_ALL, "portuguese");
			printf("Informe um número entre 1 e 4: ");
			fflush(stdin);
			scanf("%d", &n);		
			{
			printf("\n Entrada inválida, digite novamente!");
			scanf("%d",&n);
			}					
			printf("\n Entrada válida. O número foi: %d\n",n);
			system("pause");					
		}
}

