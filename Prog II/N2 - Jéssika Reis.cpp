/*Criador: Jéssika Reis de Mello.
Porva N2 - Prog II
Data de criação:01/12/2020.
Programa:1- Faça um programa em C para controlar as refeições vendidas no bandejão
da FEMASS.
Para cada pedido, o programa deverá registrar a Matrícula, Nome, Curso,
Código da refeição e se deseja sobremesa ou não.
*Cada aluno só poderá comprar uma única refeição.
*O aluno poderá pedir uma sobremesa (Pudim de leite ou Gelatina).
Caso o faça, deve ser adicionado ao seu pedido o valor de R$ 5,00.
*O programa deverá terminar quando digitar 0(zero) para a matrícula
do aluno.
*Para cada pedido, o programa deverá calcular e exibir na tela a
matrícula do aluno, o nome do prato escolhido e o valor total a
pagar.
*Ao final, o programa deverá exibir a quantidade de cada prato
vendido e o total do faturamento.*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int i=0, caixa, pra=0, alu;

typedef struct
{
	char  aluno[10], curso[10], sobremesa, refeicao[10]; 
	int matricula, codigo;
	
} inscricao;
 inscricao al;
 inscricao *p=&al;
 
 
 void veriprato ()
 {
 	if(p->codigo==10) printf ("Picadinho de carne");
 	if(p->codigo==20) printf ("Frango a parmegiana");
	if(p->codigo==30) printf ("Espaguete a bolonhesa");
 	
} 

 int pagamento (int *cod, char *sobremesa)
 {
 	int total;
 	if(*cod==10) 	total=total+15;
	 
	 if(*cod==20) 	total=total+12;

	 if(*cod==30) 	total=total+10;
	 
	 if(*sobremesa=='S' || *sobremesa=='s') total=total+5;
	 
	 return total;
 }
 
 main()
 {
		setlocale(LC_ALL, "portuguese");
 	printf("Informe a matrícula: ");
 	scanf("%i", & p->matricula);
 	while (p->matricula!=0)
 	{
 		pra++;
 		printf("Nome do aluno: ");
 		scanf("%i", &p->aluno);
 		printf("Curso: ");
 		fflush(stdin);
 		scanf("%s", &p->curso);	
		printf("Entre (10, 20, 30), Qual o codigo da refeicao?  ");
		fflush(stdin);
		scanf("%i", &p->codigo);
		printf("Deseja sobremesa? [s ou n]: ");
		fflush(stdin);
		scanf("%s", &p->sobremesa);
 		printf("Matrícula: %i", p->matricula);
 		printf("\nRefeição: ");
 		veriprato();
 		alu= pagamento(&p->codigo, &p->sobremesa);
 		caixa=caixa+alu;
	 	printf("\nTotal: %i\n", alu);
 		printf("\nInforme a matrícula: ");
 		fflush(stdin);
 		scanf("%i", &p->matricula); 
 		
	 }
	printf("\nRefeições vendidas: %i", pra);	
 	printf("\nTotal do dia: %i", caixa);

 	
 
 }
