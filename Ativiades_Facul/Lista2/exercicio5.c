#include <stdio.h>

int main(){

    int base, expoente;
    int resultado = 1;
    int contador = 0;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    while (contador < expoente)
    {
        resultado *= base;
        contador++;
    }

    printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);
    

    return 0;
}