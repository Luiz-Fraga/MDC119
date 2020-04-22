/* 1. Criar um modulo calculadora na linguagem C.

ok c) Crie um arquivo calculadora.h dentro da pasta Atividade04.
ok d) No arquivo calculadora.h, defina um protótipo para a função somar
 que recebe dois inteiros como parâmetros e retorna um inteiro.
ok e) No arquivo calculadora.h, defina um protótipo para a função subtrair 
que recebe dois inteiros como parâmetro e retorna um inteiro.
ok f) No arquivo calculadora.h, defina um protótipo para a função multiplicar 
que recebe dois inteiros como parâmetro e retorna um inteiro.
ok g) No arquivo calculadora.h, defina um protótipo para a função dividir 
que recebe dois inteiros como parâmetro e retorna um inteiro.
ok h) Crie um arquivo calculadora.c dentro da pasta Atividade04.
i) No arquivo calculadora.c, faça a inclusão do arquivo calculadora.h.
j) Implemente as funções somar, subtrair, multiplicar e dividir 
de acordo com os protótipos especificados no arquivo de interface.
k) Crie um arquivo testa_calculadora.c dentro da pasta Atividade04.
l) Declare a função main que deva imprimir o resultado de cada função da calculadora. 

Arquivo.h:
●  Declaração do módulo.
● Inclusão de outros módulos.
● Declaração de constantes.
● Declaração de tipos (typedef)
● Declaração de funções (protótipos).
*/

// gcc -o calculadora.o calculadora.c
// gcc -o calculadora_testa calculadora_testa.c calculadora.c

#ifndef calculadora_h
#define calculadora_h

#define INFINITO 999999999;

int funcao_somar(int a, int b);
int funcao_subtrair(int a, int b);
int funcao_multiplicar(int a, int b);
int funcao_dividir(int a, int b);

#endif