#include <stdio.h>

int main(){

    char sexo;
    float peso, altura, tmb;
    int idade;

    printf("Informe o sexo (M para homem, F para mulher): ");
    scanf("%s", &sexo); 

    printf("Informe o peso em kg: ");
    scanf("%f", &peso);

    printf("Informe a altura em cm: ");
    scanf("%f", &altura);

    printf("Informe a idade em anos: ");
    scanf("%d", &idade);

    if(sexo == 'm' || sexo == 'M'){

        tmb = 66.47 + (13.75 * peso) + (5.003 * altura) - (6.755 * idade);
    }else if(sexo =='F' || sexo == 'f'){

        tmb = 655.09 + (9.563 * peso) + (1.85 * altura) - (4.676 * idade);
    } else{
        printf("Sexo esta invalido, por favor utilize F ou M para a sua respota!");
        return 1;
    }

    printf("\nSua de TMB e: %.2f calorias por dia.\n", tmb);



    return 0;
}