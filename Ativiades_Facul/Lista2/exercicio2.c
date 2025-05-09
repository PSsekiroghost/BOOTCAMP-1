#include <stdio.h>

int main(){
    int positivo = 0;
    int negativo = 0;
    int num;

    printf("Digite um inteiro (zero para parar): ");
    scanf("%d", &num);

    while(num != 0){
        if(num > 0){
            positivo++;
        }
        else{
            negativo++;
        }
        printf("Digite um inteiro (zero para parar): ");
        scanf("%d", &num);
    }

    printf("Positivos: %d\nNegativos: %d", positivo, negativo);
    return 0;
}