#include <stdio.h> 
#include <stdlib.h>
int main(){
    //limpar a tela com system(clear)
    system("Clear");
    int x = 1;
    while(x <= 100){
        if( x % 4 ==0){
            printf("%d\n",x);
        }
        x++;

    }
    return 0;
}
