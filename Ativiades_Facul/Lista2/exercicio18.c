#include <stdio.h>
#include <math.h>

int main(){

    float notas[10], media, desvio_padrao;
    float soma = 0, soma2 = 0;
    int numeros_provas;

    do{

        printf("Digite o numeros de provas: ");
        scanf("%d", &numeros_provas);

        if(numeros_provas < 1 || numeros_provas > 10){
            printf("Valor não permitido, tente novamente com numeros de 1 até 10!!");
        }
    }while(numeros_provas < 1 || numeros_provas > 10);

    for(int i = 0; i < numeros_provas; i++){
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / numeros_provas;

    for(int i = 0; i < numeros_provas; i++){
        soma2 += pow(notas[i] - media, 2);
    }

    desvio_padrao = sqrt(soma2 / numeros_provas);

    printf("\nMedia das notas: %f\n", media);
    printf("desvio padrao: %2.f\n", desvio_padrao);

    return 0; 
}