#include <stdio.h>

int main(){

    int quantidade, primeiro, razao;

    printf("Digite o primeiro termo de PA: ");
    scanf("%d", &primeiro);

    printf("Digite a razao de PA: ");
    scanf("%d", &razao);

    do{

        printf("Digite a quantidade de termos: ");
        scanf("%d", &quantidade);

        if(quantidade <= 0){
            printf("Valores nao permitido, tente novamente!\n");
        }
    }while(quantidade <= 0);

    printf("Os %d primeiros termos da PA:\n", quantidade);
    for(int i = 0; i < quantidade; i++){
        int calculo = primeiro + i * razao;
        printf("%d ", calculo);
    }

    return 0;
}