/*Este programa pede dois número e com eles 
realiza as quatro operações matemáticas*/
#include <stdio.h>
int main(){
    int numero1, numero2;
    int soma, subtrair, dividir, multiplicar;
    printf("Digite um número e tecle Enter\n");
    scanf("%d",&numero1);

    printf("Digite outro número e tecle Enter\n");
    scanf("%d", &numero2);

    soma= numero1 + numero2;
    subtrair= numero1 - numero2;
    dividir=numero1 / numero2;
    multiplicar= numero1 * numero2;


    printf("O resultado da soma é %d\n",soma);
    printf("O resultado da subtração é %d\n",subtrair); 
    printf("O resultado da divisão é %d\n",dividir);
    printf("O resultado da multiplicação é %d\n",multiplicar);

    return 0;
 }