/*1. Criar um programa para ler e escrever registros em um arquivo binário na linguagem C.
d) Declare uma função main contendo uma variável arq do tipo ponteiro para FILE.
e) Dentro da função main, declare uma estrutura aluno contendo as variáveis
 matricula do tipo char[10] e nome do tipo char[30].
f) Atribua a variável arq o resultado da função open para criar o arquivo alunos.dat em modo escrita.
g) Faça um laço para ler a matricula e nome de um aluno via teclado até que uma matrícula lida seja vazia.
h) Dentro do laço, escrevar a variável aluno chamando a função fwrite.
i) Fora do laço, feche o arquivo alunos.dat chamado a função fclose.
j) Atribua a variável arq o resultado da função open para abrir o arquivo alunos.dat em modo leitura.
k) Faça um laço para imprimir o conteudo do arquivo alunos.dat até que alcance o final dele. 
l) Dentro do laço, utilize a função read para ler um registro do arquivo e 
depois imprimir o valor da matricula e nome do aluno.
m) Fora do laço, feche o arquivo alunos.dat. Execute o programa. 
Qual foi o resultado?*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    FILE *arq;
    char matricula[10];
    char nome[30];
    char campo_matricula;
    char campo_nome;

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
            fwrite(matricula[i], sizeof(matricula), 1, arq);
        }

        memset(nome, sizeof(nome), 0);
        printf("nome = ");
        scanf("%s", nome);
        getchar();

        for (i = 0; i < strlen(nome); i++)
        {
            fwrite(nome[i], sizeof(nome), 1, arq);
        }

        memset(matricula, sizeof(matricula), 0);
        printf("matricula = ");
        scanf("%s", matricula);
        getchar();
    }

    // fclose(arq);

    // arq = fopen("alunos.txt", "r");

    fseek(arq, SEEK_SET, 0);

    campo_matricula = fread(&matricula, sizeof(matricula), 1, arq);
    campo_nome = fread(&matricula, sizeof(matricula), 1, arq);

    while (!feof(arq))
    {
        printf("%c %c", campo_matricula,campo_nome);
        campo_matricula = fread(&matricula, sizeof(matricula), 1, arq);
        campo_nome = fread(&matricula, sizeof(matricula), 1, arq);
    }

    fclose(arq);

    return;
}