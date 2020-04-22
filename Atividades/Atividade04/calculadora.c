/* Arquivo de implementação
● Chamado de arquivo ‘.c’ (source).
● Implementa as operações definidas pela interface
do módulo.
● Composto pelas funções e estruturas de dados
utilizadas internamente pelo módulo.

● Inclusão do arquivo .h.
● Declaração de variáveis.
● Definição das funções do módulo. */

#include <calculadora.h>
#include <stdlib.h>
#include <stdio.h>

int funcao_somar(int a, int b)
{
    return (a + b);
}
int funcao_subtrair(int a, int b)
{
    return (a - b);
}
int funcao_multiplicar(int a, int b)
{
    return (a * b);
}
int funcao_dividir(int a, int b)
{
    if (b != 0)
        return (a / b);
    return INFINITO;
}

