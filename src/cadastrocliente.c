#include <stdio.h>
#include <stdlib.h>
#include "../lib/criararquivo.h"

//Vamos criar uma estrutura(struct) que 
//representa o cliente, com seus respectivos 
//dados.
struct cliente{
    char nome[100];
    char email[100];
    int idade;
};

int main(){
    
    system("Clear");
    //Vamos definir uma variável do tipo struct de cliente
    //assim podemos acessar as propriedades da estrutura cliente
    struct cliente cli;
    // scanf("%s",cli.nome);
    printf("Digite o nome do cliente: \n");
    fgets(cli.nome,sizeof(cli.nome),stdin);

    printf("Digite o e-mail do cliente: \n");
    fgets(cli.email,sizeof(cli.email),stdin);

    printf("Digite a idade do cliente: \n");
    scanf("%d",&cli.idade);

    printf("%s - %s/n",cli.nome,cli.email);
    
    return 0;
    
}
