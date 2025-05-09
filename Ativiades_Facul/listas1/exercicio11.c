#include <stdio.h>

int main(){

    int num1, num2, num3, ordem;

    printf("Digite o numero 1: ");
    scanf("%d", &num1);

    printf("Digite o numero 2: ");
    scanf("%d", &num2);

    printf("Digite o numero 3: ");
    scanf("%d", &num3);

    if(num1 > num2){

        ordem = num1;

        num1 = num2;
        num2 = ordem; 
    }
    if(num1 > num3){

        ordem = num1;

        num1 = num3;
        num3 = ordem; 
    }
    if(num2 > num3){

        ordem = num2;

        num2 = num3;
        num3 = ordem; 
    }

    printf("\n A ordem crecente e:  \n%d\n %d\n %d\n", num1, num2, num3);


    return 0;
}