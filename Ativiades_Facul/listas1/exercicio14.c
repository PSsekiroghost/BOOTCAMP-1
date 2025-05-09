#include <stdio.h>

int main(){

    int numero, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\n Tabuada do numero %d: ");
    for(i = 1; i <= 10; i++){

        printf("\n%d x %d = %d\n", numero, i, numero * i);
    }


    return 0;
}