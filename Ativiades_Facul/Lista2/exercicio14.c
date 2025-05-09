#include <stdio.h>

int main() {
    int primeiro, razao, quantidade;

    printf("Digite o primeiro termo de PG: ");
    scanf("%d", &primeiro);

    printf("Digite a razao de PG: ");
    scanf("%d", &razao);

    do {

        printf("Digite a quantidade de termos: ");
        scanf("%d", &quantidade);
        if (quantidade <= 0) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (quantidade <= 0);

    // Mostra os n termos da PG
    printf("Os %d primeiros termos de PG:\n", quantidade);
    int calculo = primeiro;
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", calculo);
        calculo *= razao;
    }

    return 0;
}
