#include <stdio.h>
#include <stdlib.h>

int main(){
    //Vamos declarar a variável que irá representar
    //o arquivo em tempo de execução.
    //Esta variável deve ser declarada como 
    //uma CONSTANTE, pois o seu conteúdo NUNCA
    //poderá ser alterado.Uma vez alocado o
    //nome e caminho do arquivo, estes não poderão
    //mudarem tempo de execução para não perder a 
    //localização do arquivo e sua posição
    //em memória.

    FILE *arquivo;

    //Vamos definir onde o arquivo está ou será
    //criado. Para isso iremos usar o comando 
    //fopen(f-file=arquivo | open=abrir)
    //Além disso iremos definir o atributo de 
    //manipulação de arquivos, tais como:
    //r -> read(leitura) | w -> write(escrita)
    //a -> append(adição de texto)
    arquivo = fopen("files/texto.txt","a");

    //Vamos escrever no arquivo
    fprintf(arquivo,"Sexta-Feira\n");

    //Fechar o arquivo
    fclose(arquivo);
    printf("O arquivo foi criado\n");
    return 0;

}