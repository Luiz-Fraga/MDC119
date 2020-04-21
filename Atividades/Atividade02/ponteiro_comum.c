/* 3. Escreva um programa para manipular um ponteiro.

b) Declare um bloco main.
c) Dentro do main, declare uma variável x do tipo inteiro.
d) Declare uma variável ptr do tipo ponteiro de inteiro.
e) Imprima o valor da variável ptr (Dica: usar a mascara %p para imprimir).
f) Execute o arquivo e observe o resultado.
g) Atribua um valor para a variável x.
h) Atribua o endereço da variável x para o pronteiro ptr.
i) Imprima o valor da variável x e do ponteiro ptr.
j) Execute novamente o arquivo e observe o resultado.
k) Atribua ao conteúdo do ponteiro outro valor (Dica: *ptr = 10).
l) Imprima o valor da variável x e do ponteiro ptr.
m) Execute novamente o arquivo e observe o resultado. 

Extra:
(1) para comentar ou descomentar utilizar o comando: Ctrl + ; (ctrl e ponto e virgula)*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    //letra c,d,e,f
    // int x;
    // int *prt;

    // printf("\n a variavel ptr:%p", prt);

    //letra g,h,i,j
    int x = 5;
    int *prt = x;

    printf("\n a variavel ptr:%p", prt);
    printf("\n a variavel x:%d", x);

    //letra k,l,m

    // int x = 11;
    //int *prt = 10;

    // printf("\n a variavel ptr:%p", prt);
    // printf("\n a variavel x:%d", x);

    return 0;
}