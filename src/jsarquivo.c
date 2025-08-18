#include <stdio.h>
#include <stdlib.h>

int main(){
    system("Clear");
    cabecalho();
    int p = potencia (10,5);
    float juros = jurosSimples(900.00, 9,0);
     printf("O resultado da potência é %d\n",p);
    printf("O resultado de juros é %.2F\n",juros);
    separador();
}