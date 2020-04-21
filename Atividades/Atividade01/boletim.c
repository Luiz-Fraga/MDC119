/*8. Escreva um programa que armazene em um array multitimensional as notas dos alunos e calcule a média final. Em seguida, imprima essas notas.

b) Declare um bloco main.
c) Dentro do main, declare a variável notas como um array 10X3 (double[10][3]).
d) Declare um laço que se repita de 0 até o tamanho do array.
e) Dentro no laço, utilize a função scanf para ler as duas notas de cada aluno.
f) Calcule a média e armazene na ultima coluna do array notas.
g) Declare um laço que imprima as notas e a média de cada aluno.
h) Execute o arquivo e observe o resultado.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{

    double notas[10][3];
    float soma;
    float media;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\n digite uma nota");
        scanf("%lf", &notas[i][0]);
        printf("\n digite outra nota");
        scanf("%lf", &notas[i][1]);
    }

    for (i = 0; i < 10; i++)
    {

        notas[i][2] = (notas[i][0] + notas[i][1])/2;
      

        printf("\n a nota da primeira prova: %.2lf", notas[i][0]);
        printf("\n a nota da segunda prova: %.2lf", notas[i][1]);
        printf("\n a sua nota media %.2lf", notas[i][2]);
    }

    return 0;
}