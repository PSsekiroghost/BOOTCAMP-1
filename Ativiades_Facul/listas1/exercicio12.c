#include <stdio.h>

int main() {
    char a[20], b[20], c[20], ordem[20];
    int i;

    printf("Digite a primeira string: ");
    scanf("%s", a);

    printf("Digite a segunda string: ");
    scanf("%s", b);

    printf("Digite a terceira string: ");
    scanf("%s", c);

    if (a[0] > b[0]) {
        for (i = 0; i < 20; i++) {
            ordem[i] = a[i];
            a[i] = b[i];
            b[i] = ordem[i];
        }
    }

    if (a[0] > c[0]) {
        for (i = 0; i < 20; i++) {
            ordem[i] = a[i];
            a[i] = c[i];
            c[i] = ordem[i];
        }
    }

    if (b[0] > c[0]) {
        for (i = 0; i < 20; i++) {
            ordem[i] = b[i];
            b[i] = c[i];
            c[i] = ordem[i];
        }
    }

    printf("\nStrings em ordem alfabetica:\n");
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);

    return 0;
}

