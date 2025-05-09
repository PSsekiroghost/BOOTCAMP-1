#include <stdio.h>

int main(){

    int numero, binario[32];
    int i = 0;

    do{

        printf("Digite algum numero: ");
        scanf("%d", &numero);

        if(numero <= 0){
            printf("Numero nao permitido, o valor deve ser positivo!!!\n");
        }
    }while(numero <= 0);

    while (numero > 0)
    {
        binario[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

    printf("O numero em binario: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d ", binario[j]);
    }

    return 0;
}