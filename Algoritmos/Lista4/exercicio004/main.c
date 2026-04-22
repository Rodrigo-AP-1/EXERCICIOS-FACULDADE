#include <stdio.h>

int main () {
    int x, y, i;

    printf("Numero da tabuada que voce quer: ");
    scanf("%d", &x);

    if (x > 10 || 1 > x) {
        printf("Numero nao aceito");
    } else {
        for(i = 1; i <= 10; i++) {
            y = x * i;
            printf("%d \n", y);
        }
    }
}