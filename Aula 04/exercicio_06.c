#include <stdio.h>

long long pot(int base, int expoente) {
    if (expoente == 1){
        return base;
    }
    return base * pot(base, expoente - 1);
}
int main(void){
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    do {
        printf("Digite o expoente (inteiro >= 1): ");
        scanf("%d", &expoente);
        if (expoente < 1){
            printf("Expoente invalido.\n");
        }
    } while (expoente < 1);
    printf("%d^%d = %lld\n", base, expoente,pot(base,expoente));
    return 0;
}