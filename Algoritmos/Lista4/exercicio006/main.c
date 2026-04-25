#include <stdio.h>

int main () {
    int a, i;
    int total = 0, totalPar = 0;
    int contPar = 0, contImpar = 0;
    int somaImpar = 0;
    float mediaImpar = 0;
    
    for (i = 1; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &a);

        if (a % 2 == 0) {
            totalPar += a;
            contPar++;          
        } else {
            somaImpar += a;
        }

        total += a;
    }

    // Média calculada APÓS o loop
    if (contImpar > 0) {
        mediaImpar = (float) somaImpar / contImpar;
    }

    printf("\nTotal geral:           %d\n", total);
    printf("Quantidade de pares:   %d\n", contPar);
    printf("Quantidade de impares: %d\n", contImpar);
    printf("Soma dos pares:        %d\n", totalPar);
    printf("Media dos impares:     %.2f\n", mediaImpar);

    return 0;
}