/*9. Escreva um programa que calcule a depreciação de um carro.

b) Declare um bloco main.
c) Defina uma estrutura carro_t contendo os atributos marca (char[10]), ano (int), valor (double).
d) Dentro do main, defina uma variável carro do tipo carro_s.
e) Atribua valores para os atributos de carro.
f) Defina uma variável valor_depreciado.
g) Calcule o valor depreciado do carro através da fórmula carro.valor - (2020 - carro.ano)*0.01*carro.valor.
h) Imprima o valor da variável valor_depreciado.
i) Execute o arquivo e observe o resultado. */

#include <stdlib.h>
#include <string.h>

struct carro_t
    {
        char marca[10];
        int ano;
        double valor;
    } ;

int main()
{
    struct carro_t carro_s;
    float valor_depreciado;

    carro_s.marca[10] = "peugeot";
    carro_s.ano = 1990;
    carro_s.valor = 32543.28;

    valor_depreciado = (carro_s.valor - ((2020 - carro_s.ano) * 0.01 * carro_s.valor));

    printf("\n R$ %.2f = valor do carro depreciado \n", valor_depreciado);

    return 0;
}