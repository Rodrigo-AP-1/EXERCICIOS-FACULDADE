#include <stdio.h>

int main() {
    int i;

    for (i = 101; i < 200; i++) {
        if (i % 2 != 0) {
            printf(" %d = Numero impar \n", i);
        }
    }
    return 0;
}