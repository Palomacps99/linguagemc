#include <stdio.h>
#include <stdlib.h>
int main(){
    system("clear");
    int num, cont, rs;
        cont = 1;
    printf("Digite o número da tabuada que deseja fazer \n");
    scanf("%d",&num);
    while(cont <= 10){
       rs = num * cont;
       printf("%d x %d = %d\n",num,cont,rs);
       cont++;
    
    }
    return 0;
}
