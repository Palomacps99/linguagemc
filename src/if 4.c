#include <stdio. h>

int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("%d é um número positivo.\n", numero);
    } else {
        printf("%d é um número negativo ou zero.\n", numero);
    }
    
    return 0;
    
}