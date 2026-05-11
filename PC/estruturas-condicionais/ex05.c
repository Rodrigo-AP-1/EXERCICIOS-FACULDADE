#include <stdio.h>

int main() {
    int X[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d\n", &X[i]);
    }
    
    for (i = 0; i < 10; i++) {
        if (X[i] < 0) {
            X[i] = 0;
        }
        printf("%d \n", X[i]);
    }


    return 0;
}