#include <stdio.h>

int main(){

    float orcamento, servico, total;
    float servicos2[100];
    int i;

    i = 0;
    total = 0;

    do{
        printf("Digite o valor total do orcamento (O valor minimo e 100): ");
        scanf("%f", &orcamento);

        if(orcamento < 100){
            printf("O orcamento nao permitido, tente novamente!\n");
        }
    }while(orcamento < 100);

    printf("quais são os valores do servico: ");

    while (1)
    {
        printf("Servico #%d: R$", i + 1);
        scanf("%f", &servico);

        if(servico <= 0){

            printf("Ocorreu um problema, tente novamente!\n");
            continue;
        }

        if(total + servico > orcamento){
            printf("\nServico passa o orcamento!\n");
            break;
        }

        servicos2[i] = servico;
        total += servico;
        i++;

        if(total == orcamento){
            printf("\nOrcamento totalmente usado!\n");
            break;
        }
    }

    printf("\nServicos a serem mostrados: \n");
    for (int j = 0; j < i; j++) {
        printf("Servico #%d: R$ %.2f\n", j + 1, servicos2[j]);
    }

    printf("Total usado: R$ %.2f de R$ %.2f\n", total, orcamento);
    

    return 0;
}