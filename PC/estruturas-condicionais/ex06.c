#include <stdio.h>

int main () {
    int i;
    int Q[10];
    int maior = Q[0];
    int pos = 0;   

    for (i = 0; i < 10; i++) {
        printf("Digite o valor de Q: \n");
        scanf("%d", &Q[i]);
        if (Q[i] > 0) {
            if (Q[i] > maior) {
                maior  = Q[i];
                pos = i;
            }
        } else {
            printf("Numero invalido");
        }
    }

    printf("%d %d \n", maior, pos);
}