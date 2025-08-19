#include <stdio.h>
#include <stdlib.h>

char *criar(char *nomearquivo, char *conteudo){
    FILE *arquivo;

    arquivo = fopen(nomearquivo,"a");

    //fprintf(arquivo,conteudo);
    fputs(conteudo,arquivo);

    fclose(arquivo);

    return "Arquivo criado\n";

}

float jurosSimples(float preco, float taxa){
    return preco * (taxa / 100);

}







    