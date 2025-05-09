#include <stdio.h>

int main(){

    int num1, num2, x, y;
    int resto, mdc, mmc;

    do{

        printf("Digite um numero inteiro: ");
        scanf("%d", &num1);

        printf("Digite mais um numero inteiro: ");
        scanf("%d", &num2);

        if(num1 <= 0 || num2 <= 0){
            printf("Ambos os numeros devem estar positivos, tente novamente!\n");
        }
    }while(num1 <= 0 || num2 <= 0);

    x = num1;
    y = num2;

    while (y != 0)
    {
        resto = x % y;
        x = y;
        y = resto;
    }

    mdc = x;
    mmc = (num1 * num2) / mdc;

    printf("MDC de %d e %d = %d\n", num1, num2, mdc);
    printf("MMC de %d e %d = %d\n", num1, num2, mmc);

    return 0;
}