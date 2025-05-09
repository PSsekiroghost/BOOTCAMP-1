#include <stdio.h>

int main(){

    int num;
    int primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <= 1){

        primo = 0;
    }else{

        for(int i = 2; i < num; i++){
            if(num % 1 == 0){
                primo = 0;
                break;
            }
        }
    }

    if(primo){
        printf("%d é um numero primo.\n", num);
    }else{
        printf("%d nao é um numero primo.\n", num);
    }

    return 0;
}