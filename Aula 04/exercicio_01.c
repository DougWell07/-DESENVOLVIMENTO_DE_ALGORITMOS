#include <stdio.h>

int main(void){
    int contador = 1;
    double numero, soma = 0.0, media;

    for( int i = 0; i <= 5; i++){
        printf("Digite o %d.o numero: ", contador);
        scanf("%1f", &numero);
        soma = soma + numero;
    }

    media = soma / 5.0;
    printf("Media aritmetica: %.2f\n", media);
}