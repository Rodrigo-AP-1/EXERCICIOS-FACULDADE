#include <stdio.h>

int main () {
    int i;
    int A[10];
    int V;
    int soma = 0;

    printf("Digite o valor de V: \n");
    scanf("%d", &V);

    for (i = 0; i < 10; i++) {
        scanf("%d", A[10]);
        
        if (A[i] == V) {
            soma++;
        }
        printf("%d", A[10]);
    }

    printf("%d", soma);
}