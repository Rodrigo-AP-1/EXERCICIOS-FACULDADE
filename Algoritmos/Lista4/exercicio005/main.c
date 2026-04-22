#include <stdio.h>

int main() {
    int a = 0, b = 1, c, i, termos, soma;

    printf("Quantos termos voce quer?: ");
    scanf("%d", &termos);

    soma = a + b;
    printf("%d\n", a);
    printf("%d\n", b);

    for (i = 0; i < termos - 2; i++) {
        c = a + b;
        soma += c;
        printf("%d\n", c);
        a = b;
        b = c;
    }

    printf("Soma: %d\n", soma);
}