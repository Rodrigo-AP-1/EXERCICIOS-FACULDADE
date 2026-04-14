#include <stdio.h>

int main () {
    int n1, n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1 == n2) {
        printf("ERRO: NUMEROS IGUAIS");
    } else if (n1 > n2) {
        printf("%d %d", n1, n2);
    } else {
        printf("%d %d", n2, n1);
    }

    return 0;
}