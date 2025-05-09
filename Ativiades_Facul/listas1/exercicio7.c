#include <stdio.h>

int main(){

    float valor1, valor2, valor3, media;

    printf("Digite o valor 1: ");
    scanf("%f", &valor1);

    printf("Digite o valor 2: ");
    scanf("%f", &valor2);

    printf("Digite o valor 3: ");
    scanf("%f", &valor3);

    media = (valor1 + valor2 + valor3) / 3;

    printf("A media aritmetica dos 3 valores e: %2f\n", media);

    return 0; 
}