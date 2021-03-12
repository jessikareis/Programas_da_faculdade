/* Programa: Fazer o Modelo de estrutura em (cliente) struct alinhada repetir 10 fichas com vetor.
Autor: Jéssika Reis de Mello
Data de criação: 13/06/2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
 	int x;
 	
typedef struct 
    {
        char rua [100];
        int numero;
        char bairro [40];
        char cidade [30];
        char sigla_estado [3];
        long int CEP;
    } TEndereco;
typedef struct 
    {
        char nome [80];
        long int telefone;
        TEndereco endereco;
    }TFicha;

	TFicha cliente[10];
	
	for (x=0;x<10;x++)
	{
    setlocale(LC_ALL,"portuguese");
    
	printf("\t\t\tCliente %i. \n", x+1);
    printf("Informe o nome do cliente.......: ");
    fflush(stdin);//tive que colacar pois estava dando bug na hora de compilar, estava pulando algumas das perguntas.
    gets(cliente[x].nome);
    
	printf("Informe a rua do cliente.......: ");
    fflush(stdin);
	gets(cliente[x].endereco.rua);
   
    printf("Informe o número da casa do cliente.......:");
    fflush(stdin);
	scanf("%i", &cliente[x].endereco.numero);
    
	printf("Informe o bairro do cliente......:");
    fflush(stdin);
	gets(cliente[x].endereco.bairro);
    
	printf("Informe a cidade do cliente......:");
    fflush(stdin);
	gets(cliente[x].endereco.cidade);
    
	printf("Informe o estado do cliente.......:");
    fflush(stdin);
	gets(cliente[x].endereco.sigla_estado);
   
    printf("Informe o CEP do cliente.......:");
    fflush(stdin);
	scanf("%i", &cliente[x].endereco.CEP);
   
    printf("Informe o número de telefone do cliente......:");
    fflush(stdin);
	scanf("%i", &cliente[x].telefone);
    system("cls");
	}
	
	for (x=0;x<10;x++)
	{
	printf("\t\t\tCliente %i. \n\n", x+1);
    printf("Nome: %s", cliente[x].nome);
    printf("\t\tTelefone: %i", cliente[x].telefone);
    
	printf("\nEndereço: %s, %i, %s, %s, %s.", cliente[x].endereco.rua, cliente[x].endereco.numero, cliente[x].endereco.bairro, cliente[x].endereco.cidade, cliente[x].endereco.sigla_estado);
	printf("\nCEP: %i", cliente[x].endereco.CEP);
	
}

}
