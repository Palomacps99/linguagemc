#include <stdio.h>
#include <stdlib.h>
int main(){
    system("Clear");
    int valores[5] = {15, 0, 6, 50, 18};
    int i;
    int m = valores[0];
    for (i = 1; i < 5 ; i++){
        if(valores[i] < m){
           m = valores [i];

        }
    }
    printf("O menor valor é %d\n",m);
    return 0;


}
