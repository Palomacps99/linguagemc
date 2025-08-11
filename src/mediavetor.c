#include <stdio.h>
#include <stdlib.h>
int main(){
    system("Clear");
    int valores[5] = {15, 0, 6, 50, 18};
    int i; 
    int soma = 0;
    for (i = 0 ; i < 5 ; i++){
        soma += valores[i];
    }
    printf("O resultado da soma é %.2f\n" ,soma/5.0);
    return 0;
}