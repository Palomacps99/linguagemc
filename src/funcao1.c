#include <stdio.h>
#include <stdlib.h>

/*
void: Significa vazio e, é usado para funções que NÃO 
retornam valores. Elas possuem saída predefinida
*/

void mensagem(){
     printf("Olá seja bem vindo\n");

}

int soma(int x, int y){
    return x + y;

}

int main(){
    mensagem();
    printf("A soma de 5 e 4 é igual a %d\n", soma(5,4));
    return 0;

}
