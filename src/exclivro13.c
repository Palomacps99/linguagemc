#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int soma = 0;
    for(i = 0; i < 1000; i++){
        if(i % 3 == 0 ||  i % 5 ==  0){
            printf("%d + %d = ", soma , i);
            soma += i;
            printf("%d\n",soma);

        }
    }
    printf("\n-------------------------------\n");
    printf("O resultado da soma é %d\n",soma);
    return 0;
    

}