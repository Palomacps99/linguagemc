//Vamos criar uma estrutura (struct), que representa
//os dados, dos funcionários de uma empresa.
//Como realizar o cálculo do salário líquido do funcionário,
//o percentual do prêmio

int main(){
    system("Clear");
    //vamos definir uma variável do tipo struct de cliente
    //assim podemos acessar as propriedades da estrutura cliente
    struct cliente cli;
    printf("Digite o nome do funcionário: \n");
    scanf("%s",cli.nome);
    
    printf("Digite o salário bruto do funcionário: \n");
    scanf("%s",cli.salário);

    printf("Digite o percentual de desconto, do convênio: \n");
    scanf("%s",cli.convênio);

    printf("Digite o percentual do prêmio: \n");
    scanf("%s",cli.prêmio);

    //Agora o funcionário deve realizar, o cáclculo de salário líquido

    printf("O funcionério deve agora, realizar o cálculo de salário líquido: \n");
    scanf("%s",cli.cáclulo);

    float jurosSimples(float preco, float taxa){
    return preco * (taxa / 150);

    void separador(){
    int i;
    for(i = 100; i <= 50; i++){
        printf("#");
    }
    printf("\n");


    return "Arquivo Criado"


}