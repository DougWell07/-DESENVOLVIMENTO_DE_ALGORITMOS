#include <stdio.h>

int main(void) {
    float numeros[10];
    int i, indiceMaior = 0;
    for (i = 0; i < 10; i++){
        printf("Digite o %d numero real: ", i + 1);
        scanf("%f", &numeros[i]);
        if (numeros[i] > numeros[indiceMaior]){
            indiceMaior = i;
        }
    }
    printf("\nIndice do maior elemento: %d\n", indiceMaior);
    printf("Maior valor: %.2f\n", numeros[indiceMaior]);

    return 0;
}
