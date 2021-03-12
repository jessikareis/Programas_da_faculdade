//13. Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx +c. 
//O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao
//usuário nas seguintes situações:
//a. Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o programa não deve fazer pedir os demais valores, sendo encerrado;
//b. Se o delta calculado for negativo, a equação não possui raizes reais. Informe ao usuário e encerre o programa;
//c. Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe-aao usuário;
//d. Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;

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
	printf("Calcular equação do segundo grau AX2+BX+C=0 \n");
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
	printf("O valor de delta é: %.2f\n",d);
	printf("Não existe raiz de delta.\n");
	}

	else
	{
		if (d == 0)
	{

		printf("O valor de delta é: %.2f\n",d);
		printf("A raiz de delta é: %.2f\n",r);

		raizes(a, b, c, d, r, &x1, &x2);
		printf("Tem uma raiz: x1=%.2f e x2=%.2f\n", x1, x2);

	}	
		else
	{
			if (d > 0)

	{
			printf("O valor de delta é: %.2f\n",d);
			printf("A raiz de delta é: %.2f\n",r);

			raizes(a, b, c, d, r, &x1, &x2);
			printf("Tem duas raizes: x1=%.2f e x2=%.2f\n", x1, x2);

}

}

}

}

