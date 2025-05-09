#include <stdio.h>

int main(){

    int n, a, b;
    int next;

    a = 0;
    b = 1;

    do{
        printf("Digite uma quantidade de numeros:");
        scanf("%d", &n);

        if(n <= 0){
            printf("Valor não permitido, tente novamente!\n");
        }
    }while (n <= 0);

    printf("A seguencia de Fibonacci de %d:\n", n);

    for(int i = 1; i <= n; i++){
        printf("%d", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}