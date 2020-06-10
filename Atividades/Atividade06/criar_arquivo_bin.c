/*2. Criar um programa para abrir um arquivo binário na linguagem C.
a) Crie um arquivo criar_arquivo_bin.c dentro da pasta Atividade06.
b) Declare uma função main contendo uma variável arq do tipo ponteiro para FILE.
c) Atribua a variável arq o resultado da função open para criar o arquivo dados.bin em modo leitura e escrita.
d) Verifique se a variável arq é igual a NULL. Se for imprima a mensagem "Erro ao abrir arquivo" e retorne o valor 1. 
e) Faça a função main imprimir a menssagem "Pressione uma tecla para finalizar..." e chamar a função getchar.
 Execute o programa. Qual foi o resultado?
    R:  o arquivo .bin foi criado
f) Faça a função main chamar a função feof para verificar se é o final do arquivo. 
Se for imprima a mensagem "Fim de arquivo encontrado" e retorne o valor 1.
*/
#include <stdio.h>
#include <string.h>

int main() // pq utilizar void main? e não int?
{
    FILE *arq;

    arq = fopen("dados.bin", "wb");
    if (arq = NULL)
    {
        printf("Erro ao abrir arquivo");
        return 1;
    }

    if (!feof(arq))
    {
        printf("Fim do arquivo ");
        return 1;
    }

    printf("Pressione uma tecla para finalizar...");
    getchar();
}