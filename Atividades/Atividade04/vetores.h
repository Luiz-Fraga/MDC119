 /* 2. Criar um módulo de funções para manipular vetores inteiros na linguagem C.

a) Crie um arquivo vetores.h dentro da pasta Atividade04.
b) No arquivo vetores.h, defina um protótipo 
para a função tamanho que recebe um ponteiro para inteiro como parâmetro e retorna um inteiro.
c) No arquivo vetores.h, defina um protótipo
para a função imprimir que recebe um ponteiro para inteiro e não retorna valor.
d) No arquivo vetores.h, defina um protótipo 
para a função inverter que recebe um ponteiro para inteiro e não retorna valor.
e) No arquivo vetores.h, defina um protótipo 
para a função ordenar que recebe um ponteiro para inteiro e não retorna valor.
f) Crie um arquivo vetores.c dentro da pasta Atividade04.
g) No arquivo vetores.c, faça a inclusão do arquivo vetores.h.
h) Implemente a função tamanho que deve calcular o tamanho do vetor percorrendo cada posição através do ponteiro
 (Dica: faça um laço que verifique se o conteúdo do ponteiro tem valor incrementando o ponteiro e o tamanho). 
i) Implemente a função imprimir que deve exibir na tela o valor de cada elemento do vetor.
j) Implemente a função inverter que deve trocar a posição do itens do vetor 
(Dica: faça um laço que percorra o vetor e troque a posição de um elemento com a posição tamanho-i-1).
k) Implemente a função ordenar que ponha os elementos do vetor na ordem do menor para o maior. 
(Dica: usar a implementação da atividade 03).
l) Crie um arquivo testa_vetores.c dentro da pasta Atividade04.
m) Declare a função main contendo um vetor de 10 inteiros. 
Atribua valores aletaorios aos elementos do vetor e imprima o vetor após a chamada das funções inverter e ordenar.
*/

#ifndef moduloVetores_h
#define moduloVetores_h

int tamanho(int *ponteiro);
void imprimir(int *ponteiro);
void inverter(int *ponteiro);
void ordenar(int *ponteiro);

#endif
