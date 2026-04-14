#include <stdio.h>

int main() {
    int n1;

    scanf("%d", &n1);

    if (n1 >= 0) {
        printf("Numero positivo");
    } else {
        printf("Numero negativo");
    }

    return 0;
}