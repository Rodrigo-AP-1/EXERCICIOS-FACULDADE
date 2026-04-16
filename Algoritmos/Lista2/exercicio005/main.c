#include <stdio.h>

int main () {
    char matricula[50];
    float n1, n2, n3;
    float media = 0;

    printf("Qual a sua matricula?: ");
    fgets(matricula, sizeof(matricula), stdin);

    printf("Quanto tirou na primeira prova?: ");
    scanf("%f", &n1);
    printf("Quanto tirou na segunda prova?: "); 
    scanf("%f", &n2);
    printf("Quanto tirou na terceira prova?: ");
    scanf("%f", &n3);

    if (n1 >= n2 && n1 >= n3) {
        media = (n1 * 4 + n2 * 3 + n3 * 3) / 10;
    } else if (n2 >= n1 && n2 >= n3) {
        media = (n2 * 4 + n1 * 3 + n3 * 3) / 10;
    } else {
        media = (n3 * 4 + n1 * 3 + n2 * 3) / 10;
    }

    printf("\nMatricula: %s", matricula);
    printf("Notas: %.2f | %.2f | %.2f\n", n1, n2, n3);
    printf("Media: %.2f\n", media);

    if (media >= 5) {
        printf("APROVADO");
    } else {
        printf("REPROVADO");
    }

    return 0;
}