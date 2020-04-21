#include <stdio.h>
/* 2. Escreva um programa que imprima todos os múltiplos de 3, entre 1 e 100.

b) Declare um bloco main.
c) Dentro do main, declare um laço que se repita de 1 a 100.
d) Dentro do laço, se o resto do contador por 3 é igual a zero então imprima o valor do contador.
e) Execute o arquivo e observe o resultado.
*/
int main()
{

    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("\n %d e um multiplo de 3", i);
        }
    }

    return 0;
}
