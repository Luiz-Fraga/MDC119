/*1. Escreva um programa que converta um número de segundos em horas, minutos e segundos.

d) Declare um bloco main.
e) Dentro do main, declare uma variável segundos e inicialize-a com um valor.
f) Crie uma variável horas e inicialize-a com a divisão da variável segundos por 3600.
g) Atualize a variável segundos com o resto da divisão de segundos por 3600.
h) Crie uma variável minutos e inicialize-a com a divisão da variável segundos por 60.
i) Atualize a variável segundos com o resto da divisão de segundos por 60.
j) Imprima as variáveis horas, minutos e segundos.
k) Execute o arquivo e observe o resultado.*/

#include<stdio.h>

int main(){

        int segundos = 10000;
        int horas = segundos/3600;
        segundos = segundos%3600;
        int minutos = segundos/60;
        segundos=segundos%60;
   

        printf("as horas : %d, os minutos  %d, e os segundos  %d",horas,minutos,segundos);
      
return 0;
}
       