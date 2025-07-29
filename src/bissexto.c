#include <stdio.h>

int main(){
    int ano;

    printf("Digite um ano e tecle Enter\n");
    scanf("%d" ,&ano);

    if(ano % 4== 0){
        printf("Este ano %d bissexto\n" ,ano);
    }
    else{
        printf("Este ano %d NÃO é bissexto\n",ano);
    }
    return 0;
    }