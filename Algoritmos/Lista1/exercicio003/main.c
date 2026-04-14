#include <stdio.h>

int main() {
    int totalE, vB, vN, vV;

    printf("Total de eleitores: ");
    scanf("%d", &totalE);

    printf("Votos brancos: ");
    scanf("%d", &vB);

    printf("Votos nulos: ");
    scanf("%d", &vN);

    printf("Votos validos: ");
    scanf("%d", &vV);

    // Segundo: Valida se a conta faz sentido
    if ((vB + vN + vV) > totalE) {
        printf("\nErro: A soma dos votos eh maior que o total de eleitores!\n");
    } else {
        printf("Brancos: %.2f%%\n", (vB * 100.0) / totalE);
        printf("Nulos:   %.2f%%\n", (vN * 100.0) / totalE);
        printf("Validos: %.2f%%\n", (vV * 100.0) / totalE);
    }

    return 0;
}