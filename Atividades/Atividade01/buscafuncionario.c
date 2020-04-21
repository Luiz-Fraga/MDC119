/* 7. Escreva um programa que localize um funcionário em um array multidimensional a partir da matricula e,
 em seguida, imprima o respectivo telefone.

b) Declare um bloco main.
c) Dentro do main, declare a variável funcionarios inicializando com
 {{1111,30001000},{2222,30002000},{3333,30003000},{4444,30004000},{5555,30005000},{6666,30006000},{7777,30007000}}.
d) Declare uma variável matricula.
e) Utilize a função scanf para ler um valor para a variável matricula.
f) Declare um laço que se repita de 0 até o tamanho de funcionarios.
g) Dentro do laço, se a variável matrícula é igual a posição ZERO do elemento funcionarios[], 
então imprima o valor da posição UM do elemento funcionarios[] e interrompa o laço.
h) Execute o arquivo e observe o resultado.*/

#include <stdlib.h>
#include <string.h>

int main()
{
    int funcionarios[7][2] =
        {
            {1111, 30001000},
            {2222, 30002000},
            {3333, 30003000},
            {4444, 30004000},
            {5555, 30005000},
            {6666, 30006000},
            {7777, 30007000},
        };
    int matricula;
    int i;

    printf("digite um valor para a matricula: ");
    scanf("%d", &matricula);

    for (i = 0; i < 7; i++)
    {
        {
            if (matricula == funcionarios[0])
            {
                printf("\n o funcionario na posicao 1 %i", funcionarios[1]);
            }
        }
    }
}
