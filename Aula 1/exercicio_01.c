#include <stdio.h>

int main() {
    
    //Informa as variáveis
    int num1, num2, soma;

    // Pede a infromação e guarda na variável num1
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1); // Lê o valor que você coloca no teclado 

    // Pede a infromação e guarda na variável num2
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    // Recebe as informações das variáveis e faz a soma deles, armazenando na variável soma
    soma = num1 + num2;
    
    // Mostra a soma das variáveis
    printf("A soma e de: %d\n", soma);
    return 0;
}