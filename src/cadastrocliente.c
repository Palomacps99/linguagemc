#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

    printf("%s - %s -%d anos/n",cli.nome,cli.email,cli.idade);
    //Realizar a concatenação(junção de elementos distintos
    //gravar os dados de uma só vez
    char dados_cliente[100] = {"Nome: "};
    char nome[30] = {"Nome: "};
    strcat(nome, cli.nome);
    strcat(dados_cliente,nome);

    char email[30] = {"Email: "};
    strcat(email, cli.email);
    strcat(dados_cliente,email);

    char *resultado = criar("files/cadastro.txt",dados_cliente);
    printf("%s\n",resultado);
    
    return 0;
    
}
