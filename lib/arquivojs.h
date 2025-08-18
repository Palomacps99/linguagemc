#include <stdio.h>
#include <stdlib.h>

char *criar(char *nomearquivo, char *conteudo){
    FILE *arquivo;

    arquivo = fopen(nomearquivo,"a");

    //fprintf(arquivo,conteudo);
    fputs(conteudo,arquivo);

    fclose(arquivo);

    
int main(){
    system("Clear");
    cabecalho();
    int p = potencia (4,2);
    float juros = jurosSimples(800.00, 8,0);
     printf("O resultado da potência é %d\n",p);
    printf("O resultado de juros é %.2F\n",juros);
    separador();
}

}

//Vamos criar uma estrutura (struct), que representa
//os dados, dos funcionários de uma empresa.
//Como realizar o cálculo do salário líquido do funcionário,
//o percentual do prêmio

int main(){
    system("Clear");
    //vamos definir uma variável do tipo struct de cliente
    //assim podemos acessar as propriedades da estrutura cliente.
    struct cliente cli;
    printf("Digite o nome do funcionário: \n");
    scanf("%s",cli.nome);
    
    printf("Digite o salário bruto do funcionário: \n");
    scanf("%s",cli.salário);

    printf("Digite o percentual de desconto, do convênio: \n");
    scanf("%s",cli.convênio);

    printf("Digite o percentual do prêmio: \n");
    scanf("%s",cli.prêmio);

    //Agora o funcionário deve realizar, o cáclculo de salário líquido.

    printf("O funcionério deve agora, realizar o cálculo de salário líquido: \n");
    scanf("%s",cli.cálculo);

    return "Arquivo Criado"

}
