/*
- Uma empresa comercial possui um programa para controle das receitas e despesas em seus 10 projetos. 
Os projetos são numerados de 1 até 10. Faça um programa C que controle a entrada e saída de recursos dos projetos. 
Ao solicitar o código do projeto, deve garantir que o usuário escolha entre 1 e 10, caso contrário informe o erro e peça novamente o código. 
O programa deverá ler um conjunto de informações contendo: Número do projeto, valor, tipo despesa ("R" - Receita e "D" - Despesa). 
O programa termina quando o valor do código do projeto for igual a -1. 
Sabe-se que Receita deve ser somada ao saldo do projeto e despesa subtraída do saldo do projeto. 
Ao final do programa, imprimir o saldo final de cada projeto. 
Dica: Usar uma estrutura do tipo vetor para controlar os saldos dos projetos. 
Usar o conceito de struct para agrupar as informações lidas.
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
	//preencho o vetor de projetos com 0.00 {inicialização}
	for (i=0; i<10; i++)
	{
		projetos [i]=0.00;
	}
}
