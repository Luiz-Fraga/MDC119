/* 2. Escreva um programa que converta um número de horas, minutos e segundos em segundos.

b) Declare um função converte_hhmmss_em_segundos que recebe um inteiro h, 
um inteiro m e um inteiro s como parametros e retorna int.
c) Faça a função converte_hhmmss_em_segundos retornar o valor em segundos a partir dos valores de h, m e s.
d) Declare a função main().
e) Dentro do main, declare as variáveis
horas, minudos e segundos e inicialize-as com valores lidos via função scanf().
f) Chame a função converte_hhmmss_em_segundos passando os valores da variáveis
horas, minutos e segundos. Imprima o valor retornado pela função.
g) Execute o arquivo e observe o resultado. */

#include <stdlib.h>
#include <stdio.h>

converte_hhmmss_em_segundos(int h, int m, int s)
{
    s = s;
    s = s + (60 * m);
    s = s + (3600 * h);

    return s;
}

int main()
{
    int horas, minutos, segundos, retornofuncao;
    printf("\n digite um valor para as horas: ");
    printf("\n digite um valor para os minutos: ");
    printf("\n digite um valor para os segundos: \n");
    scanf("%d", &horas);
    scanf("%d", &minutos);
    scanf("%d", &segundos);

    retornofuncao = converte_hhmmss_em_segundos(horas, minutos, segundos);

    printf(" o retorno da funcao, converte hhmmss em segundos: %d", retornofuncao);

    return 0;
}
