/* c) Crie um arquivo criar_arquivo_txt.c dentro da pasta Atividade06
d) Declare uma função main contendo uma variável arq do tipo ponteiro para FILE.
e) Atribua a variável arq o resultado da função open para abrir o arquivo dados.txt em modo leitura.
f) Verifique se a variável arq é igual a NULL. Se for imprima a mensagem "Erro ao abrir arquivo" e retorne o valor 1. 
g) Faça a função main imprimir a menssagem "Pressione uma tecla para finalizar..." e chamar a função getchar. 
Execute o programa. Qual foi o resultado?
    R: foi exibida a mensagem "pressione uma tecla para finalizar"
h) Crie um arquivo dados.txt dentro da pasta Atividade06. Execute o programa novamente. 
Qual foi o resultado? Finalize o programa pressionando uma tecla.
    R: foi exibida a mensagem "pressione uma tecla para finalizar"
i) Altere a chamada da função fopen para abrir o arquivo dados.txt em modo de escrita.
j) Apague o arquivo dados.txt. Execute o programa novamente.
Qual foi o resultado?
    R: foi exibida a mensagem "pressione uma tecla para finalizar"
k) Altere a chamada da função fopen para criar o arquivo dados.txt em modo de escrita. Execute o programa novamente.
 Qual foi o resultado? Finalize o programa pressionando uma tecla.
     R: foi exibida a mensagem "pressione uma tecla para finalizar" e o arquivo "dados.txt" apareceu na pasta
l) Edite o arquivo dados.txt pelo VSCode acrescentendo qualquer texto. Execute o programa novamente. 
Qual foi o resultado? Finalize o programa pressionando uma tecla.
    R: a mensagem digitada foi apagada
m) Altere a chamada da função fopen para adicionar no arquivo dados.txt. Apague o arquivo dados.txt. 
Execute o programa novamente. Qual foi o resultado? Finalize o programa pressionando uma tecla.
    R: o arquivo não foi criado
n) Altere a chamada da função fopen para criar e adicionar no arquivo dados.txt. Apague o arquivo dados.txt. 
Execute o programa novamente. Qual foi o resultado? Finalize o programa pressionando uma tecla.
    R:foi criado o arquivo dados.txt
o) Execute novamente o programa. Edite o conteudo do arquivo dados.txt pelo VSCode acrescentando qualquer texto. 
Qual foi o resultado? Finalize o programa pressionando uma tecla.
    R: os dados doarquivo permaneceram
p) Faça a função main chamar a função fclose para fechar o arquivo dados.txt antes da linha que imprime uma mensagem. 
q) Execute o programa novamente. Edite o conteudo do arquivo dados.txt pelo VSCode acrescentando qualquer texto. 
Qual foi o resultado? Finalize o programa pressionando uma tecla. 
    R: o arquivo persistiu, sem perda de dados */

#include <stdio.h>
#include <string.h>

int main() // pq utilizar void main? e não int?
{
    FILE *arq;

    // arq=fopen("dados.txt", "r"); // Letra E
    arq = fopen("dados.txt", "w");

    if (arq = NULL)
    {
        printf("Erro ao abrir arquivo");
        return 1;
    }
    fclose(arq);

    printf("Pressione uma tecla para finalizar...");
    getchar();
}