#include <stdio.h>

int main() {
    int x = 1, n, i;

    printf("Qual numero voce quer fatoriar? \n ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        x = x * i;
    }

        printf(" Resultado: %d", x);

}