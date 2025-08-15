#include <stdio.h>
#include <stdlib.h>
#include "../lib/funcao4.h"

int main(){
    int x = 30;
    printf("Valor no main %d - %p\n",x, &x);
    valor1(x);
    valor2(&x);
    return 0;

}