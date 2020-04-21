/* 1. Escreva um programa que leia um ano e verifique se ele é bissexto.

d) Declare uma função is_bissexto() que recebe como um parâmetro um inteiro i e retorna um inteiro.
e) Faça a função calcular se o valor de i é bissexto ou não retornando 0 para falso e 1 para verdadeiro.
f) Declare a função main().
g) Dentro do main, declare a variável ano e inicialize-a com um valor lido via função scanf().
ok h) Chame a função is_bissexto() passando o valor de ano como parâmetro.
 Se ela retornar 1 então imprima Ano é bissexto. Senão imprima Ano não é bissexto.
ok i) Execute o arquivo e observe o resultado. */

#include <stdlib.h>
#include <stdio.h>

is_bissexto(int i)
{

    int retorno0ou1;

    if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
    {
        retorno0ou1 = 1;
    }
    else
    {
        retorno0ou1 = 0;
    }

    return retorno0ou1;
}

int main()
{

    int ano;
    int retornofuncao;
    printf("\n digite um ano para avaliar se bissexto ou nao: ");
    scanf("%d", &ano);

    retornofuncao = is_bissexto(ano);

    if (retornofuncao == 1)
    {
        printf("\n Ano bi");
    }
    else
    {
        printf("\n Ano nao bi");
    }
    return 0;
}