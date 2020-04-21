/* 5. Escreva um programa que manipular uma struct através de um ponteiro.

b) Declare uma estrutura s_aluno os elementos matricula do tipo int, nome do tipo char[30], media do tipo float.
c) Declare um bloco main.
d) Dentro do main, declare uma variável aluno para a struct.
e) Declareum  ponteiro ptr para a struct.
f) Atribua valores para os elementos de aluno.
g) Atribua o endereço de aluno para o ponteiro ptr.
h) Imprima os valores dos elementos de aluno através do ponteiro (Dica: ptr->elemento).
i) Execute o arquivo e observe o resultado. */

#include <stdlib.h>
#include <stdio.h>

struct s_aluno
{
    int matricula;
    char nome[30];
    float media;
};

int main()
{
    struct s_aluno aluno;
    struct s_aluno *ptr;
    
    ptr = &aluno;

    aluno.matricula = 2012127731;
    aluno.nome[30] = 'luiz';
    aluno.media = 10.5;

    printf("\n o elemento matricula:%d", ptr->matricula);
    printf("\n o elemento nome:%c", ptr->nome);
    printf("\n o elemento media:%f", ptr->media);

    return 0;
}
