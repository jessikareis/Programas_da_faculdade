/*Criadora: J�ssika Reis de Mello
Programa: 4 - Fa�a um programa semelhante, usando struct. Neste novo programa
d� nome aos armaz�ns (simule como usu�rio) {Rio de Janeiro, Maca�,
Rio das Ostras, Campos, Nova Friburgo} e simule como usu�rio a
solicita��o de 5 produtos {�leo, Feij�o Preto, Macarr�o, Arroz, Azeite}.
Cadastre suas quantidades, unidade (ex: lt, Kg, Cx) e pre�o de compra.
Data: 03/07/2020*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	int x=0, k=0, z;
	
	struct
	{
		char nome[30], prod[40][35], unid[40][40];
		int quant[50], pr=0;
		float preco[5], total[60], caixa; 
			
	}armazem[20];
	
	
	while(1==1)
	{	
		while(1==1)
		{
		system("cls");
		setlocale(LC_ALL, "portuguese");
		printf("Digite 1 Para come�ar a cadastrar ou 5 Para sair: ");
			
		scanf("%d", &x);
		if(x==5) break;
		if(x==1) 
		{
		break;
		}
		}
	if(x==5) break;
	system("cls");
	printf("\nDigite o nome do armaz�m: ");
	fflush(stdin);
	gets(armazem[k].nome);
	
	printf("\nPara terminar digite 'sair'");
	z=0;
	while(1==1)
	{
			
	printf("\n%i� Produto: ",z+1);
	fflush(stdin);		
	gets(armazem[k].prod[z]);
	if(strcmp(armazem[k].prod[z],"sair") == 0) break;
	printf("\nUnidade de medida: ",z+1);
	gets(armazem[k].unid[z]);
	printf("\nPre�o unit�rio: ", z+1);
	scanf("%f", &armazem[k].preco[z]);
	printf("\nQuantidade: ",z+1);		
	scanf("%d", &armazem[k].quant[z]);
	armazem[k].total[z] = armazem[k].quant[z]*armazem[k].preco[z];	
	armazem[k].caixa = armazem[k].caixa + armazem[k].total[z];	
	z++;
	armazem[k].pr++;
	}	
	k++;
	}
	system("cls");
	for(int w=0; w<k; w++)
	{
		printf("\n------------------------------------------------------------------------------------------------------------------\n");
		printf("Armaz�m:\t\t\t\t%s\n", armazem[w].nome);
		printf("\nProdutos\t\t\tQuantidade\tUnidade\tPre�o Unit�rio\tPre�o Total\n\n");
		for(int p=0; p<armazem[w].pr; p++)
		{
			printf("\n%s",armazem[w].prod[p]);
			printf("\t\t\t\t%2i", armazem[w].quant[p]);
			printf("\t %1s", armazem[w].unid[p]);
			printf("\t  %.2f", armazem[w].preco[p]);
			printf("\t\t  %.2f", armazem[w].total[p]);
			
		}
		printf("\n\nTotal:\t\t\t\t\t\t  %.2f ", armazem[w].caixa);
		printf("\n\n");
	}

}
