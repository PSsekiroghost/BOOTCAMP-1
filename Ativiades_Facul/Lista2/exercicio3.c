#include <stdio.h>

int main(){

    float nota;

    do{

        printf("Digite a nota entre 0 a 10: ");
        scanf("%f", &nota);

        if(nota < 0 || nota > 10){

            printf("Nota invalida, precisa estar entre 0 e 10!!");
        }
        
    } while (nota < 0 || nota > 10);

    printf("A nota esta valida: %2.f\n", nota);
    

    return 0;
}