/*
- Uma empresa comercial possui um programa para controle das receitas e despesas em seus 10 projetos. 
Os projetos s�o numerados de 1 at� 10. Fa�a um programa C que controle a entrada e sa�da de recursos dos projetos. 
Ao solicitar o c�digo do projeto, deve garantir que o usu�rio escolha entre 1 e 10, caso contr�rio informe o erro e pe�a novamente o c�digo. 
O programa dever� ler um conjunto de informa��es contendo: N�mero do projeto, valor, tipo despesa ("R" - Receita e "D" - Despesa). 
O programa termina quando o valor do c�digo do projeto for igual a -1. 
Sabe-se que Receita deve ser somada ao saldo do projeto e despesa subtra�da do saldo do projeto. 
Ao final do programa, imprimir o saldo final de cada projeto. 
Dica: Usar uma estrutura do tipo vetor para controlar os saldos dos projetos. 
Usar o conceito de struct para agrupar as informa��es lidas.
*/

main()
{
	//criar um vetor de projetos
	float projetos[10]={};
	int i;
	//criar uma estrutura para receber os dados do projeto
	struct {
		int numero;
		float valor;
		char tipo;
	}boleto;
	//preencho o vetor de projetos com 0.00 {inicializa��o}
	for (i=0; i<10; i++)
	{
		projetos [i]=0.00;
	}
}
