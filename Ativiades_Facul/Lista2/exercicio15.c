#include <stdio.h>
#include <math.h>

int main(){

    float razao, primeiro, terceiro;
    float soma = 0;
    int quantidade;

    printf("Digite a razao de PG: ");
    scanf("%f", &razao);

    printf("Digite o terceiro termo da PG: ");
    scanf("%f", &terceiro);

    do {

        printf("Digite a quantidade de termos (que seja maior que 3): ");
        scanf("%d", &quantidade);
        if (quantidade <= 3) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (quantidade <= 3);

    primeiro = terceiro / (float)pow(razao, 2);

    printf("\n O %d primeiros termos de PG:\n ", quantidade);
    for(int i = 0; i < quantidade; i++){
        float calculo = primeiro * (float)pow(razao, i);
        printf("%2.f ", calculo);
    }

    if(razao == 1){

        soma = primeiro * quantidade;
    }else{
        soma = primeiro * (pow(razao, quantidade) - 1 / (razao - 1));
    }

    printf("\n Soma dos %d primeiros termos: %.2f\n", quantidade, soma);

    return 0;
}