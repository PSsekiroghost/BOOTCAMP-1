#include <stdio.h>

int main() {
    int num;
    int soma = 0, contador = 0;
    float media;

    do {
        printf("Digite um numero inteiro (digita algum numero negativo para parar o contador): ");
        scanf("%d", &num);

        if (num >= 0) {
            soma += num;
            contador++;
        }
    } while (num >= 0);

    if (contador > 0) {
        media = (float)soma / contador;
        printf("Media dos valores digitados sao: %.2f\n", media);
    } else {
        printf("Nao foi digitado nenhum valor valido!!!\n");
    }

    return 0;
}
