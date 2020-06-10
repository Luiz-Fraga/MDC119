/*2. Criar um programa para ler e escrever linhas em um arquivo texto na linguagem C.
a) Crie um arquivo ler_escrever_linhas.c dentro da pasta Atividade07.
b) Declare uma função main contendo uma variável arq do tipo ponteiro para FILE.
c) Dentro da função main, declare as variáveis matricula do tipo char[10] e nome do tipo char[30].
d) Atribua a variável arq o resultado da função open para criar o arquivo alunos.txt em modo escrita.
e) Faça um laço para ler as variáveis matricula e nome via teclado até que uma matrícula lida seja vazia.
f) Dentro do laço, escreva no arquivo alunos.txt o valor das variáveis matricula e nome através da função fputs.
g) Fora do laço, feche o arquivo alunos.txt.

h) Atribua a variável arq o resultado da função open para abrir o arquivo alunos.txt em modo leitura.
i) Faça um laço para imprimir o conteudo do arquivo alunos.txt até que alcance o final dele. 
j) Dentro do laço, utilize a função fgets para ler uma linha do arquivo e depois imprima o valor retornado por ela.
k) Fora do laço, feche o arquivo alunos.txt. Execute o programa. Qual foi o resultado? */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    FILE *arq;
    char matricula[10];
    char nome[30];
    char linha_matricula;
    char linha_nome;

    arq = fopen("alunos.txt", "w+");

    if (arq == NULL)
    {
        printf("Erro ao criar o arquivo\n");
        return;
    }

    memset(matricula, sizeof(matricula), 0);
    printf("matricula = ");
    scanf("%s", matricula);
    getchar();

    while (strcmp(matricula, "0"))
    {
        int i;
        for (i = 0; i < strlen(matricula); i++)
        {
            fputs(matricula[i], arq);
        }

        memset(nome, sizeof(nome), 0);
        printf("nome = ");
        scanf("%s", nome);
        getchar();

        for (i = 0; i < strlen(nome); i++)
        {
            fputs(nome[i], arq);
        }

        memset(matricula, sizeof(matricula), 0);
        printf("matricula = ");
        scanf("%s", matricula);
        getchar();
    }

    // fclose(arq);

    // arq = fopen("alunos.txt", "r");

    fseek(arq, SEEK_SET, 0);

    linha_matricula = fgets(matricula,30,arq);
    linha_nome = fgets(nome,10,arq);

    while (!feof(arq))
    {
        printf("%c %c", linha_matricula,linha_nome);
        linha_matricula = fgets(matricula,30,arq);
        linha_nome = fgets(nome,10,arq);

    }

    fclose(arq);

    return;
}