#include <stdio.h>

int main() {
    int i;
    int x;

    while (x != 0) {
        scanf("%d", &x);
        if (x > 0) {
            printf("Positivo \n");
        } else if (0 > x) {
            printf("Negativo \n");
        }
    
    }
    return 0;
}