#include <stdio.h>

int main(){

    float preco, valor_desconto, preco_desconto;

    printf("Digite o preco do produto (R$): ");
    scanf("%f", &preco);

    valor_desconto = preco * 0.20;
    preco_desconto = preco - valor_desconto;

    printf("\n      TABELA DE DESCONTO      \n");
    printf("------------------------------ \n");
    printf(" Preco original:     R$ %.2f  \n", preco);
    printf(" Voce ganhou:        R$ %.2f  \n", valor_desconto);
    printf(" Preco com desconto: R$ %.2f  \n", preco_desconto);
    printf("------------------------------ \n");

    return 0; 

}