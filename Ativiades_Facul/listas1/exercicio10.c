#include <stdio.h>

int main(){

    int num1, num2, num3, maior;

    printf("Digite o numero 1: ");
    scanf("%d", &num1);

    printf("Digite o numero 2: ");
    scanf("%d", &num2);

    printf("Digite o numero 3: ");
    scanf("%d", &num3);

    maior = num1; 

    if(num2 > maior){
        maior = num2;
    }
    if(num3 > maior){
        maior = num3;
    }

    printf("O maior numero e %d\n", maior);



    return 0; 
}