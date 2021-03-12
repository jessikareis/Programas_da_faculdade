/* Programa: Completar o Modelo de estrutura em (cliente) struct alinhada
Autor: Jéssika Reis de Mello
Data de criação: 13/06/2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

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
main()
{
	TFicha cliente;
    setlocale(LC_ALL,"");
    
	printf("Informe o nome do cliente.......: ");
    fflush(stdin);
    gets(cliente.nome);
    
    printf("Informe a rua do cliente.......: ");
   	fflush(stdin);
    gets(cliente.endereco.rua);
   
    printf("Informe o número da casa do cliente.......:");
    fflush(stdin);
    scanf("%i", &cliente.endereco.numero);
   
    printf("Informe o bairro do cliente......:");
   	fflush(stdin);
    gets(cliente.endereco.bairro);
   
    printf("Informe a cidade do cliente......:");
   	fflush(stdin);
    gets(cliente.endereco.cidade);
   
    printf("Informe o estado do cliente.......:");
   	fflush(stdin);
    gets(cliente.endereco.sigla_estado);
   
    printf("Informe o CEP do cliente.......:");
   	fflush(stdin);
    scanf("%i", &cliente.endereco.CEP);
   
    printf("Informe o número de telefone do cliente......:");
   	fflush(stdin);
    scanf("%i", &cliente.telefone);
    system("cls");
   
    printf("Nome: %s", cliente.nome);
    printf("\t\tTelefone: %i", cliente.telefone);
    
	printf("\nEndereço: %s, %i, %s, %s, %s.", cliente.endereco.rua, cliente.endereco.numero, cliente.endereco.bairro, cliente.endereco.cidade, cliente.endereco.sigla_estado);
	printf("\nCEP: %i", cliente.endereco.CEP);
	return 0;
}
