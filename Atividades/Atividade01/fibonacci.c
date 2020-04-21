/* 3. Escreva um programa que imprima os 10 primeiros números da serie de Fibonacci.

b) Declare um bloco main.
c) Dentro do main, declare as variáveis anterior, numero e próximo. 
d) Inicialize as variáveis numero e proximo com 0 e 1, respectivamente.
e) Crie um laço que se repita 10 vezes.
f) Dentro do laço, imprima a variável numero.
g) Atualize a variável anterior com a variável proximo.
h) Incremente a variável proximo com a variável numero.
i) Atualize a variável numero com a variável anterior.
j) Execute o arquivo e observe o resultado. */

#include <stdio.h>

int main()
{

    int anterior;
    int numero = 0;
    int proximo = 1;
    int i;

    for (i = 0; i < 10; i++)
    {

        printf("a variavel numero: %d \n", numero);
        anterior = proximo;
        proximo = numero + proximo;
        numero = anterior;
    }

    return 0;
}