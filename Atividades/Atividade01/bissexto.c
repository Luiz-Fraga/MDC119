/* 4. Escreva um programa que leia um ano e verifique se ele é bissexto.
ok c) Dentro do main, declare a variável ano.
ok d) Utilize a função scanf para ler um valor para a variável ano.
ok e) Se ano é múltiplo de 4 e não é múltiplo de 100, ou é múltiplo de 400 então imprima Ano é bissexto. Senão imprima Ano não é bissexto.
ok f) Execute o arquivo e observe o resultado. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        printf("ano bi");
    }
    else
    {
        printf("o ano nao e bi");
    }
    return 0;
}
