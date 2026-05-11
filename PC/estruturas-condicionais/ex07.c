#include <stdio.h>

int main() {
    int i;
    int U[10];
    int temp;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor de U: \n");
        scanf("%d", &U[i]);
    }

    for (i = 0; i < 5; i++) {
        temp = U[i];
        U[i] = U[9 - i];
        U[9 - i] = temp;
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", U[i]);
    }

    return 0;
}