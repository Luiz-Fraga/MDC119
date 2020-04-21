/* 5. Escreva um programa que imprima os n primeiros números da serie de Fibonacci.

b) Declare uma função fibonacci() que recebe um inteiro n como parâmetro e retoner um inteiro.
c) Faça a função fibonacci() verificar se o parâmetro n é maior que 2. 
Se for retorne fibonacci(n-1) + fibonacci(n-2). Senão retorne o valor 1.  
d) Declare a função main().
e) Dentro do main, declare a variável n e inicialize-a com um valor lido via função scanf().
f) Declare um laço que se repita até o valor de n.
g) Faça o laço imprimir o valor retornado pela chamada fibonacci() passando o contador i+1. 
h) Chame a função fibonacci() passando p valor da variável n como parâmetro.
i) Execute o arquivo e observe o resultado.*/

#include <stdlib.h>
#include <stdio.h>

int funcao_fibonacci(int n)
{
    if (n > 2)
    {
        return (funcao_fibonacci(n - 1) + funcao_fibonacci(n - 2));
    }
    else {
        return (1);
    }
}

int main()
{
    int n=0;
    int i=0;

    printf("\n\n digite um valor para os n primeiros numeros da sequencia: ");
    scanf("%d", &n);

    for (i = 1; i <= n ; i++)
    {
        printf("\no valor retornado pela chamada fibonacci() %d", funcao_fibonacci(i));
    }

    return 0;
}