#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd[5] = {12,35,90,15,10};
    int i;
    for(i = 0 ; i < 5 ; i++){
        printf("%d\n",qtd[i]);
    }
    printf("========== Ponteiro ===========\n");
    int *p = qtd;
    for(i = 0; i < 5 ; i++){
        printf("%d\n",*p);
        p++;
    }
    return 0;
    
}