#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/arquivosjs.h"

struct Funcionario{
    char nome[100];
    float salario;
    float premio;
    float convenio;
    float salarioliquido;

};

    int main(){
    system ("Clear");
    struct Funcionario fun;
    printf("Digite o nome do funcionário: \n");
    fgets(fun.nome,sizeof(fun.nome),stdin);

    printf("Digite o salário do funcionário: \n");
    scanf("%f",&fun.salario);

    printf("Digite o desconto de convênio do funcionário: \n");
    scanf("%f",&fun.convenio);

    printf("Digite o prêmio do funcionário: \n");
    scanf("%f",&fun.premio);

    printf("O desconto do convênio é %.2f\n", jurosSimples(fun.salario,fun.convenio));
    printf("O valor do prêmio é %.2f\n", jurosSimples(fun.salario,fun.premio));

    fun.salarioliquido = fun.salario + jurosSimples(fun.salario,fun.premio) - jurosSimples(fun.salario,fun.convenio);
    printf("O salário líquido é %2.f\n",fun.salarioliquido);

    //Vamos criar uma composição com textos literais e variáveis para
    //guardar em no arquivo de texto
    char dados_funcionario[100];

    char nome[30] = {"Nome: "};
    strcat(nome,fun.nome);
    strcat(dados_funcionario,fun.nome);


    //Criamos o vetor salario para armanezar o texto Salário com R$
    //e juntar(concatenar) com valor do salário
    char salario[20] = {"Salario: R$ "};
    //Foi criado o vetor C_salario para guardar o valor do salário convertido
    //em char. Somente assim, será concatenado com o texto Salário  R$
    char c_salario[10];

    //Estamos usando o comando sprintf para converter o valor digitado
    // do salario que vem no formato float, para o formato char.
    //Assim podemos juntar com o vetor salario, criando, então a 
    //estrutura: Salário R$ 0000.00 
    sprintf(c_salario,"%2.f",fun.salario);

    //Junção(concatenação) entre os vetores salario(Salário R$) com
    //c_salario(O valor digitado do salario)
    strcat(salario, c_salario);

    //Depois de juntar os vetores relacionados ao salário, agora iremos
    // adicionar ao vetor de dados_funcionario para, então, gravar no
    // arquivo de texto
    strcat(dados_funcionario,salario);





    char salario_liquido[20] = {"\nLíquido: R$ "};
    
    char c_salario_liquido[10];

    sprintf(c_salario_liquido,"%2.f",fun.salarioliquido);

    strcat(salario_liquido, c_salario_liquido);

    strcat(dados_funcionario,salario_liquido);


    char *resposta = criar("files/funcionario.txt",dados_funcionario);
    printf("%s\n",resposta);


    return 0;

}