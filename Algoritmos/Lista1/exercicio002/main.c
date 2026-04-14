#include <stdio.h>

int main () {
    int anos, meses, dias, diastotal;


    printf("Quantos anos, meses e dias voce tem?: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    diastotal = (anos*365) + (meses*30) + dias;

    printf("Voce tem %d dias de vida", diastotal);
}