/* 6. Escreva um programa que permita ao usuário preencher um array de 10 números e,
 em seguida, imprima os valores lidos.

b) Declare um bloco main.
c) Dentro do main, declare a variável array inicializando com 10 posições.
d) Declare um laço que se repita de 0 até tamanho do array 
e utilize a função scanf para ler cada elemento do array.
e) Declare um laço que imprima cada elemento de array.
f) Execute o arquivo e observe o resultado.*/ 

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[10];
    int i;

    for (i=0; i<10; i++)
    {
		printf("digite um valor para inserir no array: ");
    scanf("%d", &array[i]);
    }

    for (i=0; i<10; i++)
    {
        printf("%d,", array[i]);
    }

    return 0;
}