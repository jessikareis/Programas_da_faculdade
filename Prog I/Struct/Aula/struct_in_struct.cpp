/* Programa: Modelo de estrutura em (cliente) struct aninhada
Autor: Anselmo Pestana R. Costa
Data de criação: 09/06/2020
Data de Modifocação: 09/06/2020
*/
#include <stdio.h>
#include<locale.h>
typedef struct 
        {
        char rua [50];
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
main()
{
	TFicha cliente;
    setlocale(LC_ALL,"");
    printf("Informe o nome do cliente.......: ");
    gets(cliente.nome);
    printf("Informe a rua do cliente.......: ");
    gets(cliente.endereco.rua);
    printf("Cliente: %s \n Endereço:\n Rua: %s \n",cliente.nome,cliente.endereco.rua );
    return 0;
}
