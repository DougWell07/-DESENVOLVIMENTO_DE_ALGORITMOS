#include <stdio.h>

int main() {

    float altura, peso_ideal;

    printf("Informe a sua altura: ");
    scanf("%f", &altura);

    peso_ideal = (72.5 * altura) - 58;

    printf("O seu peso ideal e: %.2fkg.\n", peso_ideal);
}