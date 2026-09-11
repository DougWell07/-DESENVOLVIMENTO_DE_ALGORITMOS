#include <stdio.h>

int main(void){
    int numeros[5];
    int i;

    for (i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\nSequencia em ordem inversa: \n");
    for (i = 4; i >= 0; i--){
        printf("%d", numeros[i]);
        if(i > 0){
            printf(" ");
        }
    }
    printf("\n");
}