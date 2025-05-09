#include <stdio.h>

int main(){

char nome[10];
char sobrenome[20];

printf("Digite o seu primeiro nome na tela: ");
scanf("%s", nome);

printf("Digite seu sobrenome na tela: ");
scanf("%s", sobrenome);

printf("%s\n", nome);
printf("%s", sobrenome);


return 0;
}
