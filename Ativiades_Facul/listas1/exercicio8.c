#include <stdio.h>
#include <math.h>

int main(){

    float valor1, valor2, valor3, valor4;
    float media_aritmetica, media_geometrica, media_harmonica;
    
    printf("Digite o valor 1 positivo: ");
    scanf("%f", &valor1);

    printf("Digite o valor 2 positivo: ");
    scanf("%f", &valor2);

    printf("Digite o valor 3 positivo: ");
    scanf("%f", &valor3);

    printf("Digite o valor 4 positivo: ");
    scanf("%f", &valor4);

    
    if (valor1 <= 0 || valor2 <= 0 || valor3 <= 0 || valor4 <= 0) {
        printf("\nErro: Todos os valores devem ser positivos!\n");
        return 1;
    }

    
    media_aritmetica = (valor1 + valor2 + valor3 + valor4) / 4;

    
    media_harmonica = 4 / ((1/valor1) + (1/valor2) + (1/valor3) + (1/valor4));

    
    media_geometrica = pow((valor1 * valor2 * valor3 * valor4), 0.25);


    printf("\n\nResultados das medias:\n");
    printf("Media Aritmetica: %.2f\n", media_aritmetica);
    printf("Media Geometrica: %.2f\n", media_geometrica);
    printf("Media Harmonica: %.2f\n", media_harmonica);

    return 0;
}