#include <stdio.h>

int main(){

    int quantidade, primeiro, terceiro, razao;

    printf("Digite a razao de PA: ");
    scanf("%d", &razao);

    printf("Digite o terceiro termo de PA: ");
    scanf("%d", &terceiro);

    do{

        printf("Digite a quantidade de termos (que seja maior que 3): ");
        scanf("%d", &quantidade);

        if(quantidade <= 3){
            printf("Valor nao permitido, tente novamente!\n");
        }
    }while(quantidade <= 3);

    primeiro = terceiro - 2 * razao;

    printf("Os %d primeiros termos de PA:\n", quantidade);
    for(int i = 0; i < quantidade; i++){
        int calculo = primeiro + i * razao;
        printf("%d ", calculo);
    }

    return 0;
}