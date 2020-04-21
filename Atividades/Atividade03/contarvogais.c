/* 3. Escreva um programa que leia uma frase e calcule a quantidade de vogais nela.

b) Declare a função conta_vogais() que recebe como parametro um pontiero para char e retorna um inteiro.
c) Dentro da função declare uma variável quantidade incializando-a com ZERO.
d) Declare um laço que se repita de o conteudo do ponteiro for igual a 0.
e) Dentro do laço, utilize a função strchr para procurar o conteúdo do ponteido na string "AaEeIiOoUu" 
(Dica: strchr("AaEeIiOoUu", *p) ). Se a função achar o ponteiro na string incremente a variável quantidade.
f) Faça a função retornar a função da variável quantidade.
g) Declare a função main().
h) Dentro do main, declare a variável frase do tipo char[50] e inicialize-a com um valor lido via função scanf().
i) Imprima a quantidade de vogais na frase a partir da chamada da função contar_vogais().
j) Execute o arquivo e observe o resultado. 

Extra:
(1) A função strchr predefinida do C, que verifica se um caracter (chr) pertence a uma string (str).
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

conta_vogais(char *ponteiro)
{
    int quantidade = 0;
    while (*ponteiro != 0)
    {
        if (strchr("AaEeIiOoUu", *ponteiro))
        {
            quantidade++;
            ponteiro++;
        }
        else
        {
            ponteiro++;
        }
    }
    return quantidade;
}

int main()
{
    int retorno_conta_vogais;
    int i;
    char frase[50];
    scanf("%c", &frase);

    retorno_conta_vogais = conta_vogais(frase);

    printf("a quantidade de vogais: %d vogais", retorno_conta_vogais);

    return 0;
}