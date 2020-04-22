#include <stdlib.h>
#include <stdio.h>
#include <calculadora.h>

int main()
{
    int a = 0;
    int b = 0;

    printf("imprimir o valor de somar %d \n", funcao_somar(a, b));
    printf("imprimir o valor de subtrair %d \n", funcao_subtrair(a, b));
    printf("imprimir o valor de multiplicar: %d \n", funcao_multiplicar(a, b));
    printf("imprimir o valor de dividir %d \n", funcao_dividir(a, b));

    return 0;
}