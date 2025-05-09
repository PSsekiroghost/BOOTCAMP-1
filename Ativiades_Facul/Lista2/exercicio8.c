#include <stdio.h>

int main(){

    int n;
    int fatorial = 1;

    do {
        printf("Digite um numero (não pode ser negativo): ");
        scanf("%d", &n);

        if (n < 0) {
            printf("Valor não permitido, tente novamente!\n");
        }
    } while (n < 0);

    for(int i = 1; i <= n; i++){
        fatorial *= i;
    }

    printf("%d! = %d\n", n, fatorial);

    return 0;
}