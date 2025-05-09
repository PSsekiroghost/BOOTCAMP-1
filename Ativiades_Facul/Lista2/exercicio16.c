#include <stdio.h>

int main(){

    float capital, taxa, montante;
    int meses;

    printf("Digite o capital inicial R$: ");
    scanf("%f", &capital);

    printf("Digite a taxa de juros paga R$: ");
    scanf("%f", &taxa);

    printf("Digite os meses: ");
    scanf("%d", &meses);

    taxa = taxa / 100.0;
    montante = capital; 

    printf("\nEvolucao do valor: \n");
    for(int i = 0; i <= meses; i++){
        montante *= (1 + taxa);
        printf("\nMes %2d: R$ %2f\n", i, montante); 
    }

    return 0;
}