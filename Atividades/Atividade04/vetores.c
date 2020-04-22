/* g) No arquivo vetores.c, faça a inclusão do arquivo vetores.h.
h) Implemente a função tamanho que deve calcular o tamanho do vetor percorrendo cada posição através do ponteiro
 (Dica: faça um laço que verifique se o conteúdo do ponteiro tem valor incrementando o ponteiro e o tamanho). 
i) Implemente a função imprimir que deve exibir na tela o valor de cada elemento do vetor.
j) Implemente a função inverter que deve trocar a posição do itens do vetor 
(Dica: faça um laço que percorra o vetor e troque a posição de um elemento com a posição tamanho-i-1).
k) Implemente a função ordenar que ponha os elementos do vetor na ordem do menor para o maior. 
(Dica: usar a implementação da atividade 03).
l) Crie um arquivo testa_vetores.c dentro da pasta Atividade04.
m) Declare a função main contendo um vetor de 10 inteiros. 
Atribua valores aletaorios aos elementos do vetor e imprima o vetor após a chamada das funções inverter e ordenar.*/

#include <vetores.h>
#include <stdio.h>
#include <stdlib.h>

int tamanho(int *ponteiro)
{
    int tamanhoinicial = 0;
    while (*ponteiro != 0)
    {
        tamanhoinicial = tamanhoinicial + 1;
        *ponteiro++;
        int tamanhofinal;
        tamanhoinicial = tamanhofinal;
        return tamanhofinal;
    }
}

int imprimir(int *ponteiro) 
{
    while (*ponteiro != 0)
    {
        printf("%d", *ponteiro);
    }
}

int inverter (int *ponteiro){ //ca: faça um laço que percorra o vetor e troque a posição de um elemento com a posição tamanho-i-1)

}