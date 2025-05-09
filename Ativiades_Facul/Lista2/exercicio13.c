#include <stdio.h>

int main() {
    int quantidade, razao, quarto, primeiro;

    printf("Digite a razao de PA: ");
    scanf("%d", &razao);

    printf("Digite o quarto termo de PA: ");
    scanf("%d", &quarto);

    do {

        printf("Digite a quantidade de termos: ");
        scanf("%d", &quantidade);
        if (quantidade <= 0) {
            printf("Valor nao permitido, tente novamente!\n");
        }
    } while (quantidade <= 0);

    primeiro = quarto - 3 * razao;

    int soma = quantidade * (2 * primeiro + (quantidade - 1) * razao) / 2;

    printf("A soma dos %d primeiros termos de PA e: %d\n", quantidade, soma);

    return 0;
}
