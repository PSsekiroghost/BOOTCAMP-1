#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int dia_aniv;
    int mes_aniv;
    int diff;

    printf("Digite o dia do seu aniversário: ");
    scanf("%d", &dia_aniv);
    printf("Digite o mês do seu aniversário: ");
    scanf("%d", &mes_aniv);

    if (mes_aniv == 4) {
        diff = dia_aniv - 3;
        if (diff == 0) {
            printf("Feliz aniversário!\n");
        } else if (diff > 0) {
            printf("Faltam %d dias para o seu aniversário\n", diff);
        } else {
            printf("Passaram %d dias do seu aniversário\n", -diff);
        }
    } 
    else if (mes_aniv == 5) {
        printf("Faltam %d dias para o seu aniversário\n", (30 - 3) + dia_aniv); 
    }
    else if (mes_aniv == 6) {
        printf("Faltam %d dias para o seu aniversário\n", (30 - 3) + 31 + dia_aniv); 
    }
    else if (mes_aniv == 7) {
        printf("Faltam %d dias para o seu aniversário\n", (30 - 3) + 31 + 30 + dia_aniv); 
    }
    else if (mes_aniv == 8) {
        printf("Faltam %d dias para o seu aniversário\n", (30 - 3) + 31 + 30 + 31 + dia_aniv); 
    }
    else if (mes_aniv == 9) {
        printf("Faltam %d dias para o seu aniversário\n", (30 - 3) + 31 + 30 + 31 + 31 + dia_aniv); 
    }
    else if (mes_aniv == 10) {
        printf("Faltam %d dias para o seu aniversário\n", (30 - 3) + 31 + 30 + 31 + 31 + 30 + dia_aniv); 
    }
    else if (mes_aniv == 11) {
        printf("Faltam %d dias para o seu aniversário\n", (30 - 3) + 31 + 30 + 31 + 31 + 30 + 31 + dia_aniv); 
    }
    else if (mes_aniv == 12) {
        printf("Faltam %d dias para o seu aniversário\n", (30 - 3) + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia_aniv);
    }
    else if (mes_aniv == 3) {
        printf("Passaram %d dias do seu aniversário\n", 3 + (31 - dia_aniv)); 
    }
    else if (mes_aniv == 2) {
        printf("Passaram %d dias do seu aniversário\n", 3 + 31 + (28 - dia_aniv)); 
    }
    else if (mes_aniv == 1) {
        printf("Passaram %d dias do seu aniversário\n", 3 + 31 + 28 + (31 - dia_aniv)); 
    }
    else {
        printf("Mês inválido.\n");
    }

return 0; }

