#include <stdio.h>

int main() {

    int horas, minutos, segundos, total;

    printf("Informe a quantidade de horas: ");
    scanf("%d", &horas);

    printf("Informe a quantidade de minutos: ");
    scanf("%d", &minutos);

    printf("Informe a quantidade de segundos: ");
    scanf("%d", &segundos);

    total = (horas * 360) + (minutos * 60) + segundos;

    printf("A soma total de tempo em segundos e de: %d\n", total);
}