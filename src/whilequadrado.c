#include <stdio.h>
#include <stdlib.h>
int main(){
    system("clear");
    int linha = 1;
    int coluna = 1;
    while(linha <= 10){
        while(coluna <= 20){
            printf("*");
            coluna++;
        }
        coluna= 1;
        printf("\n");    
        linha++;
    }
    return 0;

}