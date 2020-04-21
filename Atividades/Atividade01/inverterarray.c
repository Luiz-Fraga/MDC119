/*5. Escreva um programa que imprima um array na sequência normal e na sequência invertida.

b) Declare um bloco main.
c) Dentro do main, declare a variável array inicializando com os valores {1,2,3,4,5,6,7,8,9,10}.
d) Declare um laço que se repita de 0 até tamanho do array e imprima cada elemento do array.
e) Declare um laço que se repita de tamanho do array-1 até 0 e imprima cada elemento do array.
f) Execute o arquivo e observe o resultado.*/ 
#include <stdio.h>

int main()
{
    int array[10] = {1,4,5,6,8,9,0,13,15,18};
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\n o array normal %d", array[i]);
    }

    for (i = 9; i >= 0; i--)
    {
        printf("\n o array invertido %d", array[i]);
    }

    return 0;
}