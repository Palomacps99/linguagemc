#include <stdio.h>

int main() {
    int opcao;
    printf("Selecione uma opção:\n");
    printf("1. Ver Saldo\n");
    printf("2. Fazer Saque\n");
    printf("3. Fazer Depósito\n");
    printf("4. Sair\n");
    printf("Digite sua opção: ");
    scanf("%D", &opcao); // Lê a opção do usuário
    if (opcao ==1) {
        printf("Você escolheu 'Ver Saldo'.\n");
        // Lógica para Ver Saldo 
    } else if (opcao ==2) {
        printf("Você escolheu 'Fazer Saque'.\n");
        //Lógica para fazer saque
    } else if(opcao ==3) {
        printf("Você escolheu 'Fazer Depósito'.\n");
        // Lógica para fazer depósito
    } else if(opcao == 4) {
        printf("Saindo do programa.Até mais!\n");
    } else {
        printf("Opção inválida. POr favor, escolha um número entre 1 e 4.\n");
    }
    return 0;
}