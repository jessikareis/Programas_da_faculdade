/*Criador: J�ssika Reis de Mello.
Lista 1
Programa: 3- REPETI��O
3.5) Solicitar um n�mero entre 1 e 4. Se a pessoas digitar um n�mero diferente, mostrar a
mensagem "entrada inv�lida" e solicitar o n�mero novamente. Se digitar correto mostrar o n�mero digitado.
Data de cria��o:31/08/2020.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	int n;
	while(n<1||n>4)
		{
			setlocale(LC_ALL, "portuguese");
			printf("Informe um n�mero entre 1 e 4: ");
			fflush(stdin);
			scanf("%d", &n);		
			{
			printf("\n Entrada inv�lida, digite novamente!");
			scanf("%d",&n);
			}					
			printf("\n Entrada v�lida. O n�mero foi: %d\n",n);
			system("pause");					
		}
}

