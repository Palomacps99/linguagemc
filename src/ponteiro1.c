#include <stdio.h>
#include <stdlib.h>
int main(){
    int valor = 10;
    int *pvalor = &valor;
    printf("O valor de %d\n",valor);
    printf("O valor de %p\n",pvalor);
    printf("==================================================\n");
    printf("O número da variável valor é %d\n",valor);
    printf("O endereço da variável valor é %p\n",&valor);
    printf("O número contido guardado no ponteiro é %p\n",*pvalor);
    printf("O endereço guardado no ponteiro é %p\n",pvalor);
    return 0;
}