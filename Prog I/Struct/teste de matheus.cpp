//Criador: Matheus Muniz Vantil Da Costa.
//Programa: Ficha de 10 clientes.
//Data de criação:10/06/2020.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	int x;
	
typedef struct 
        {
        char rua [70];
        int numero;
        char bairro [20];
        char cidade [30];
        char sigla_estado [3];
        long int CEP;
        } TEndereco;
		typedef struct 
        {
        char nome [50];
        long int telefone;
        TEndereco endereco;
        }TFicha;


	TFicha cliente[10];
   
    for(x=0;x<3;x++)
    {
	printf("\t\t\t\t\tCliente %i. \n", x+1);
	printf("\nInforme o nome do cliente.......: ");
    fflush(stdin);
    gets(cliente[x].nome);
    printf("\nInforme a rua do cliente.......: ");
    fflush(stdin);
    gets(cliente[x].endereco.rua);
    printf("\nInforme o CEP do cliente.......: ");
    fflush(stdin);
    scanf("%i", &cliente[x].endereco.CEP);    
    printf("\nNúmero da casa do cliente......: ");
    fflush(stdin);
    scanf("%i", &cliente[x].endereco.numero);
    printf("\nInforme a cidade do cliente....: ");
    fflush(stdin);
    gets(cliente[x].endereco.cidade);
    printf("\nInforme o bairro do cliente....: ");
    fflush(stdin);
    gets(cliente[x].endereco.bairro);
    printf("\nInforme o estado do cliente (sigla): ");
    fflush(stdin);
    gets(cliente[x].endereco.sigla_estado);
    printf("\nInforme o número do cliente....: ");
    fflush(stdin);
	scanf("%i", &cliente[x].telefone);
	system("cls");	
	}
	for(x=0;x<3;x++)
	{
	printf("\t\t\t\t\tCliente %i.\n\n", x+1);	
	printf("Nome: %s", cliente[x].nome);
	printf("\t\tTelefone: %i", cliente[x].telefone);
	printf("\nEndereço: Rua %s, %i, %s, %s, %s.", cliente[x].endereco.rua, cliente[x].endereco.numero, cliente[x].endereco.bairro, cliente[x].endereco.cidade, cliente[x].endereco.sigla_estado);
	printf("\nCEP: %i", cliente[x].endereco.CEP);	
	printf("\n---------------------------------\n");
	}	
	    
}
