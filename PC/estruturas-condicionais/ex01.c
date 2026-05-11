#include <stdio.h>

int main () {
    int x, y;

    printf(" Qual o valor de x: \n");
    scanf("%d", &x);

    printf(" Qual o valor de y: \n");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("Pertence ao primeiro quadrante");
    } else if (x > 0 && 0 > y) {
        printf("Pertence ao quarto quadrante");
    } else if (0 > x && y > 0) {
        printf("Pertence ao segundo quadrante");
    } else {
        printf("Pertence ao terceiro quadrante");
    }

    return 0;
}