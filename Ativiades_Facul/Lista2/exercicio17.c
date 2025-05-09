#include <stdio.h>

int main(){

    float taxa, deposito;
    float montante = 0;
    int meses; 

    printf("Digite os valores do deposito R$: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros paga R$: ");
    scanf("%f", &taxa);

    printf("Digite os meses: ");
    scanf("%d", &meses);

    taxa = taxa / 100;

    printf("\nMes  | Montante    | Juros do mes\n");
    printf("-----------------------------------\n");
    for (int  i = 0; i <= meses; i++)
    {
        float juros = montante * taxa;
        montante += deposito + juros;
        printf("%-4d | R$ %-8.2f | R$ %.2f\n", i, montante, juros);
    }

    return 0;
}