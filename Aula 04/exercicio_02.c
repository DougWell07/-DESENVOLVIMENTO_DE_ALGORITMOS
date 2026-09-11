#include <stdio.h>

int main(void){
    int contador = 1;
    int numero, maior = 0;

    while(contador <= 6){
        
        do{
            printf("Digite o %d numero inteiro positivo: ", contador);
            scanf("%d", &numero);

            if (numero <= 0) {
                printf("Valor inválido. Digite um numero maior que zero. \n");
            }
        } while (numero <= 0);

        if (contador == 1 || numero > maior){
            maior = numero;
        }

        contador++;
    }

    printf("Maior numero lido: %d\n", maior);
    return 0;
}
