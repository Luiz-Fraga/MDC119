/* 
1. Escreva um programa que crie uma union para armazenar os diversos tipos de inteiro.

ok c) Crie um arquivo union_inteiros.c acionando o menu New File com o botão direito sobre a pasta Atividade02. 
ok d) Declare uma union u_numeros_inteiros contendo os elementos: 
caracter do tipo char, inteiro_curto do tipo short int, inteiro do tipo int e inteiro_longo do tipo long int.
ok e) Declare um bloco main.
ok f) Dentro do main, declare uma variável numero para a union u_numeros_inteiros.
ok g) Atribua um valor para o elemento numero.caracter, em seguida imprima o valor do elemento.
ok h) Atribua um valor para o elemento numero.inteiro_curto, em seguida imprima o valor do elemento.
ok i) Atribua um valor para o elemento numero.inteiro, em seguida imprima o valor do elemento.
ok j) Atribua um valor para o elemento numero.inteiro_longo, em seguida imprima o valor do elemento.
ok k) Imprima novamente os valores de cada elemento de numero.
ok l) Execute o arquivo e observe o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct u_numeros_inteiros {
    char caracter;
    short int inteiro_curto;
    int inteiro;
    long int inteiro_longo
};

int main()
{
    struct u_numeros_inteiros numero;
    numero.caracter = 'l';
    printf("\n o numero caracter: %c", numero.caracter);
    numero.inteiro_curto = 12;
    printf("\n o numrero inteiro curto: %d", numero.inteiro_curto);
    numero.inteiro = 15673;
    printf("\n o numrero inteiro: %d", numero.inteiro);
    numero.inteiro_longo = 626373;
    printf("\n o numero inteiro longo: %d", numero.inteiro_longo);

    printf("\n\n\n o numero caracter 2: %c", numero.caracter);
    printf("\n o numrero inteiro curto 2: %d", numero.inteiro_curto);
    printf("\n o numrero inteiro 2: %d", numero.inteiro);
    printf("\n o numero inteiro longo 2: %d", numero.inteiro_longo);
    return 0;
}