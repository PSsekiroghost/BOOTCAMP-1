#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("A tabuada do numero %d:\n", num);
    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;


    /*Sim, é possivel utilizar o while para esta questão. 
    Usando while seria necessario iniciar o contador antes e incrementá-lo. EX:
    
    
    #include <stdio.h>
    
    int main() {
        int num, i = 1;

        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        printf("Tabuada do %d:\n", num);
        while (i <= 10) {
          printf("%d x %d = %d\n", num, i, num * i);
          i++;
        }
        return 0;
    }
        */
}


