#include <stdio.h>

void cabecalho(){
    printf("===================================================\n");
    printf("=                                                \n");
    printf("=                                                \n");
    printf("============== Programa em C =====================\n");
    printf("\n\n");

}
int potencia(int base, int expoente){
    int rs = base;
    int i;
    for(i = 1; i < expoente; i++){
        rs *= base;

    }
    return rs;
}
float jurosSimples(float preco, float taxa){
    return preco * (taxa / 100);


}

void separador(){
    int i;
    for(i = 1; i <= 50; i++){
        printf("#");
    }
    printf("\n");
}

