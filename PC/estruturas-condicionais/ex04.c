#include <stdio.h>

int main () {
    int a, b, c;

    printf(" Qual o valor de a: \n");
    scanf("%d", &a);

    printf(" Qual o valor de b: \n");
    scanf("%d", &b);
    
    printf(" Qual o valor de c: \n");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("Triangulo Equilatero");
    } else if (a != b && b == c || b != c && a == b || a == c && c != b) {
        printf("Triangulo Isosceles");
    } else {
        printf("Triangulo Escaleno");
    }

    return 0;
}