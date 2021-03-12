//13. Fa�a um programa que calcule as ra�zes de uma equa��o do segundo grau, na forma ax2 + bx +c. 
//O programa dever� pedir os valores de a, b e c e fazer as consist�ncias, informando ao
//usu�rio nas seguintes situa��es:
//a. Se o usu�rio informar o valor de A igual a zero, a equa��o n�o � do segundo grau e o programa n�o deve fazer pedir os demais valores, sendo encerrado;
//b. Se o delta calculado for negativo, a equa��o n�o possui raizes reais. Informe ao usu�rio e encerre o programa;
//c. Se o delta calculado for igual a zero a equa��o possui apenas uma raiz real; informe-aao usu�rio;
//d. Se o delta for positivo, a equa��o possui duas raiz reais; informe-as ao usu�rio;

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

float delta(float a, float b, float c)
{
float d;
d=(b*b-4*a*c);

return d;

}

float raiz(float d)

{
float r;
r = sqrt(d);

return r;
}

void raizes(float a, float b, float c, float d, float r, float*x1, float*x2)

{

*x1 = ((- + r)/2 * a);

*x2 = ((- - r)/2 * a);

return ;

}

int main()

{

float a, b, c, d, r, x1, x2;

	setlocale(LC_ALL,"portuguese");
	printf("Calcular equa��o do segundo grau AX2+BX+C=0 \n");
	printf("Digite o valor de a:");
	scanf("%f",&a);

	printf("Digite o valor de b: ");
	scanf("%f",&b);

	printf("Digite o valor de c: ");
	scanf("%f",&c);

	d = delta(a, b, c);

	r = raiz(d);

	if (d < 0)
	{	
	printf("O valor de delta �: %.2f\n",d);
	printf("N�o existe raiz de delta.\n");
	}

	else
	{
		if (d == 0)
	{

		printf("O valor de delta �: %.2f\n",d);
		printf("A raiz de delta �: %.2f\n",r);

		raizes(a, b, c, d, r, &x1, &x2);
		printf("Tem uma raiz: x1=%.2f e x2=%.2f\n", x1, x2);

	}	
		else
	{
			if (d > 0)

	{
			printf("O valor de delta �: %.2f\n",d);
			printf("A raiz de delta �: %.2f\n",r);

			raizes(a, b, c, d, r, &x1, &x2);
			printf("Tem duas raizes: x1=%.2f e x2=%.2f\n", x1, x2);

}

}

}

}

