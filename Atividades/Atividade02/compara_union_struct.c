/* 2. Escreva um programa que compare o tamanho da union com a struct.

ok a) Crie um arquivo compara_union_struct.c acionando o menu New File com o botão direito sobre a pasta Atividade02. 
ok b) Declare uma union u_produto contendo os elementos nome do tipo char[30], preco do tipo float, volume do tipo float e peso do tipo float.
ok c) Declare uma struct s_produto contendo os mesmos elementos da union.
ok d) Declare um bloco main.
ok e) Dentro do main, declare uma variável produto1 para a union e outra variável produto2 para struct.
ok f) Atribua valores para os elementos tanto da variável produto1 quanto da variável produto2.
ok g) Imprima os tamanhos da variável produto1 e produto2 (Dica: utilize a função sizeof()).
ok h) Execute o arquivo e observe o resultado.
ok i) Declare um outra struct s_item contendo os mesmos elmentos da union,
sendo que os elementos volume e peso devem compartilhar a mesma área de memória 
(Dica: declare uma union dentro da struct contendo peso e volume).
ok j) Declare as variáveis produto3 e produto4 para a struct s_item.
k) Atribua valores para os elementos das variáveis produto3 e produto4, sendo que produto3 tem peso e produto4 tem volume.
l) Imprima os tamanhos da variável produto3 e produto4.
m) Execute novamente o arquivo e observe o resultado. 

extra: 
(1) para que os elementos volume e peso compartilhem a emsma área de memória, na letra "i", 
se declara elas dentro de uma union pq uma union tem como principal função compartilhar a memória das variáveis que ela possui
(2) uma Union ou Struct podem possuir mais de uma variável declarada para ela, como ocorre na letra "j"
(3) o sizeof também pode ser adicionado direto no printf -> printf(" o tamanho ... %d", sizeof(variavel); */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union u_produto {
    char tipo[30];
    float preco;
    float volume;
    float peso
};
struct s_produto
{
    char tipo[30];
    float preco;
    float volume;
    float peso
};

struct s_item
{
    char tipo[30];
    float preco;
    union u_compartilhar_a_mesma_memoria {
        float volume;
        float peso
    } u_compartilhar_a_mesma_memoria;
};

int main()
{

    union u_produto produto1;
    struct s_produto produto2;
    struct s_item produto3;
    struct s_item produto4;
    float tamanhoproduto1;
    float tamanhoproduto2;
    float tamanhoproduto3;
    float tamanhoproduto4;

    produto1.tipo[30] = 'varejo distribuicao';
    produto1.preco = 10.23;
    produto1.volume = 3;
    produto1.peso = 15;

    produto2.tipo[30] = 'varejo distribuicao';
    produto2.preco = 10.23;
    produto2.volume = 3;
    produto2.peso = 15;

    tamanhoproduto1 = sizeof(produto1);
    tamanhoproduto2 = sizeof(produto2);
    tamanhoproduto3 = sizeof(produto3);
    tamanhoproduto4 = sizeof(produto4); 

    produto4.u_compartilhar_a_mesma_memoria.volume = 3;
    produto3.u_compartilhar_a_mesma_memoria.peso = 15;

    printf("\n tamanho produto1 (union):%f", tamanhoproduto1);
    printf("\n tamanho produto2 (struct):%f", tamanhoproduto2);
    printf("\n tamanho produto3 (struct com compartilhamento de memoria):%f", tamanhoproduto3);
    printf("\n tamanho produto4 (struct com compartilhamento de memoria):%f", tamanhoproduto4);

    return 0;
}