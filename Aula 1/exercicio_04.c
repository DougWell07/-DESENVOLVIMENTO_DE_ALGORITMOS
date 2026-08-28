#include <stdio.h>

int main() {

    int dia;
    float km, preco;

    printf("Informe a quantidade de dias que você alugou o carro: ");
    scanf("%d", &dia);

    printf("Informa a quantidade de quilometros percorridos: ");
    scanf("%f", &km);

    preco = (60 * dia) + (0.15 * km);

    printf("O valor a ser pago e de: %.2f.\n", preco);
}