/*4. Ponteiro de uma função

ok b) Declare uma função maior() que recebe dois parametros inteiros a e b e retorna um inteiro. 
c) Faça a função maior() retornar a comparação a > b;
ok d) Declare uma função menor() que recebe dois parametros inteiros a e b e retorna um inteiro. 
e) Faça a função menor() retornar a comparação a < b;
ok f) Declare uma função ordena que recebe um ponteiro inteiro vetor e 
um ponteiro para uma função que recebe dois parametros inteiros a e b e retorna inteiro.
g) Faça um laço que repita i de 0 ate 9.
h) Dentro do laço faça outro laço que repita j de i até 9.
i) Dentro do segundo laço verifique se a chamada ao ponteiro da funçao ptr passando como parametros vetor[i] e
 vetor[j]. Se for verdade, declare uma variável aux do tipo inteiro e atribua o valor de vetor[i]. 
 Atribua ao vetor[i] o valor de vetor[j]. E por último, atribua ao vetor[j] o valor de aux.
j) Declare uma função imprime() que recebe um ponteiro de inteiro vetor e não retorna nada.
k) Dentro da função imprime() faça um laço que repida i de 0 até 9.
l) Dentro do laço imprima o valor de vetor[i].
m) Fora do laço imprima o caracter \n.
n) Declare a função main().
o) Dentro do main declare um vetor v de inteiros inicializando com dez valores distintos 
(ex.: int v[] = {5, 6, 8, 1, 2, 0, 3, 4, 7, 9};) 
p) Chame a função ordena() passando como parâmetros o vetor v e a função maior().
q) Chame a função imprime() passando como parâmtro o vetor v.
r) Chame a função ordena() passando como parâmetros o vetor v e a função menor().
s) Chame a função imprime() passando como parâmtro o vetor v.
t) Execute o arquivo e observe o resultado. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int maior(int a, int b)
{

    return a > b;
}
int menor(int a, int b)
{
    return a < b;
}

void ordena(int *p, int (*funcao)(int a, int b)) //passagem por referencia
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if ((*funcao)(p[i]), (p[j]))
            {
                int aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }
}

void imprime(int *v)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d", v[i]);
    }
}

int main()
{
    int vetor[9] = {5, 6, 9, 8, 1, 3, 6, 2, 4};

    ordena(vetor, maior);
    imprime(vetor);
    ordena(vetor, menor);
    imprime(vetor);
    return 0;
}