#include <stdio.h>
float soma( float a, float b)
{
    float x;
    x=a+b;
    return x;
}
float sub(float a, float b)
{
     float x;
    x=a-b;
    return x;    
    
}
float mult(float a, float b)
{
    float x;
    x=a*b;
    return x;        
}
float div(float a, float b)
{
    float x;
    x=a/b;
    return x;    
}
main()
{
    float valor;
    char op;
    float x,y;
    printf("Informe um valor: ");
    scanf("%f",&x);
    fflush(stdin);
    printf("Informe outro valor: ");
    scanf("%f",&y);    
    fflush(stdin);
    // chamar a fun��o soma e passar os valores para calculo.
    printf("escolha a operacao + - * / : ");
    scanf("%c", &op);
    fflush(stdin);
    switch(op)
    {
        case '+':
            valor=soma(x,y);
            printf("Soma: %.2f", valor);
            break;
        case '-':
            printf("Subtra��o: %.2f", sub(x,y));
            break;
        case '*':
            printf("Multiplicacao: %.2f", mult(x,y));
            break;
        case '/':
            printf("Divisao: %.2f", div(x,y));
            break;
        default:
            printf("Opca invalida!!");
    }
    printf("%d\n", y);
    
}
