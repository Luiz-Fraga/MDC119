/* 4. Escreva um programa que percorra os elementos de um array utilizando um ponteiro.

b) Declare um bloco main.
c) Dentro do main, declare uma variável string do tipo array de 30 caracteres.
d) Atribua a frase "Eu gosto de C!" a variável string.
e) Declara um ponteiro p para o tipo caracter.
f) Atribua ao ponteiro o endereço da string.
g) Faça um laço para percorrer cada elemento da string 
(Dica: utilize como condição de parada o conteúdo do ponteiro igual a '\0' e incremente o ponteiro). 
h) Execute o arquivo e observe o resultado.

Extra:
(1) letra "f" atribuir ao ponteiro o endereço da string, significa passar a *p o endereço de memória da string"
(2) como ele sugere uma condicao de parada, utilizar o while como laço
(3) "\0" é um terminador nulo - se qualquer coisa representável em binário é um caracter,
 quando uma string começa (outro detalhe do C: uma string começa onde um ponteiro para string - leia-se char[] - aponta), 
 como o sistema operacional saberia quando terminar tal string? 
 Daí convencionou-se que uma string termina no primeiro caracter nulo = todos bits 0, 
 ou terminador, ou “\0”. Se num arquivo de gigabytes não ouver nenhum terminador, 
 a string continua no arquivo/endereço fisicamente contiguo, até acabar a memória ou o hd*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char string[30] = "eu gosto de c!";
    int *p = string;

while (*p != '\0')   {
        printf("\n o conteudo %p", *p);
        p++;
    }

    return 0;
}
