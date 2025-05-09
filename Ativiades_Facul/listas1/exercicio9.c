#include <stdio.h>
#include <math.h>

int main(){

    float valor1, valor2, valor3, valor4;
    float media, variancia, desvio_padrao;

    printf("Digite o valor 1 numero real: ");
    scanf("%f", &valor1);

    printf("Digite o valor 2 numero real: ");
    scanf("%f", &valor2);

    printf("Digite o valor 3 numero real: ");
    scanf("%f", &valor3);

    printf("Digite o valor 4 numero real: ");
    scanf("%f", &valor4);

    media = (valor1 + valor2 + valor3 + valor4) / 4;

    variancia = ((valor1 - media)*(valor1 - media) + (valor2 - media)*(valor2 - media) + (valor3 - media)*(valor3 - media) + (valor4 - media)*(valor4 - media)) / 4;
    
    desvio_padrao = sqrt(variancia);


    printf("\n\n Resultados:\n");
    printf(" Media Aritmetica: %.2f\n", media);
    printf(" Variancia: %.2f\n", variancia);
    printf(" Desvio Padrao: %.2f\n", desvio_padrao);

return 0;
}