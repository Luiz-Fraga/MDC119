/*1. Criar um programa para ler e escrever caracteres em um arquivo texto na linguagem C.
a) Execute o arquivo cmd.bat. Em seguida, digite code e pressione ENTER para chamar o VS Code.
b) Crie uma pasta Atividade07 acionando a opção New Folder sobre a pasta Atividades.
c) Crie um arquivo ler_escrever_caracteres.c dentro da pasta Atividade07.
d) Declare uma função main contendo uma variável arq do tipo ponteiro para FILE.
e) Dentro da função main, declare as variáveis matricula do tipo char[10] e nome do tipo char[30].
f) Atribua a variável arq o resultado da função open para criar o arquivo alunos.txt em modo escrita.
g) Faça um laço para ler as variáveis matricula e nome via teclado até que uma matrícula lida seja vazia.
h) Dentro do laço, faça um laço percorrer cada caracter de matricula e escrever no arquivo alunos.txt chamando a função fputc, e outro laço para percorrer cada caracter de nome e também escrever no arquivo alunos.txt.
i) Fora do laço, feche o arquivo alunos.txt chamado a função fclose.
j) Atribua a variável arq o resultado da função open para abrir o arquivo alunos.txt em modo leitura.
k) Faça um laço para imprimir o conteudo do arquivo alunos.txt até que alcance o final dele. 
l) Dentro do laço, utilize a função fgetc para ler um caracter do arquivo e depois imprima o valor retornado por ela.
m) Fora do laço, feche o arquivo alunos.txt. Execute o programa. Qual foi o resultado?*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    FILE *arq;
    char matricula[10];
    char nome[30];
    char caracter;

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
            fputc(matricula[i], arq);
        }

        memset(nome, sizeof(nome), 0);
        printf("nome = ");
        scanf("%s", nome);
        getchar();

        for (i = 0; i < strlen(nome); i++)
        {
            fputc(nome[i], arq);
        }

        memset(matricula, sizeof(matricula), 0);
        printf("matricula = ");
        scanf("%s", matricula);
        getchar();
    }

    // fclose(arq);

    // arq = fopen("alunos.txt", "r");

    fseek(arq, SEEK_SET, 0);

    caracter = fgetc(arq);

    while (!feof(arq))
    {
        printf("%c", caracter);
        caracter = fgetc(arq);
    }

    fclose(arq);

    return;
}