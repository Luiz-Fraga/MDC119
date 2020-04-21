/* 10. Escreva um programa que cadastre um funcionário em um array.

b) Declare um bloco main.
c) Defina uma estrutura funcionario_t contendo os atributos nome (char[50]), salário (double), admissao (char[10]).
d) Dentro do main, defina as variaveis funcionarios (funcionario_t[100]) e total (int).
e) Defina a variável funcionario do tipo funcionario_t.
f) Utilize a função scanf para ler os valores de nome, salario e admissao da variável funcionario. 
g) Armazene na posição total de funcionarios o valor de funcionario, em seguida, incremente total.
h) Repita os passos d) e e) até que o nome do funcionário seja igual a "0".
i) Faça um laço que se repita de 0 até total e imprima o nome, salário e admissão de cada funcionarios[i].
j) Execute o arquivo e observe o resultado.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct funcionario_t
{
    char nome[50];
    double salario;
    char admissao[10]
};
int main()
{

    struct funcionario_t funcionario[50];

    int total = 0;
    int i = 0;
    int id = 1;

    printf("\n digite um nome %d para o funcionario: ", id);
    scanf("%s", &funcionario[i].nome);

    while (strcmp(funcionario[i].nome, "0"))
    {
        printf("digite um salario para o funcionario %d: ", id);
        scanf("%lf", &funcionario[i].salario);

        printf("digite uma admissao para o funcionario %d: ", id);
        scanf("%s", &funcionario[i].admissao);

        i = i + 1;
        total++;
        id++;

        printf("\n digite um nome para %d o funcionario: ", id);
        scanf("%s", funcionario[i].nome);
    }

    printf("\n total de funcionarios: %d\n ", total);
    for (i = 0; i < total; i++)
    {
        printf("\n %s, nome funcionario: ", funcionario[i].nome);
        printf("\n %lf.2, salario funcionario: ", funcionario[i].salario );
        printf("\n %s, admissao funcionario: \n", funcionario[i].admissao );
    }

    return 0;
}