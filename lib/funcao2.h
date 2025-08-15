#include <stdio.h>

void mensagem (){
    printf("Olá seja bem vindo!");
}
void separador(){
    int i;
    for(i = 0 ; i  < 50; i++){
        printf("=");
    }
}
int precoTotal(int qtd, int preco){
    return qtd * preco;

}