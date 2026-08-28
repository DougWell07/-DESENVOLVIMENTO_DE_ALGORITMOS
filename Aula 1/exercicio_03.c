#include <stdio.h>

int main() {

    int a, b, temp;

    printf("Informe um numero: ");
    scanf("%d", &a);

    printf("Informe o segundo numero: ");
    scanf("%d", &b);

    temp = a; //Guarda o valor de 'a' na variável 
    a = b;  //'a' recebe o valor de 'b'
    b = temp; //'b' recebe o valor do antigo valor de 'a' que estava guardado na variável 'temp'

    printf("Os valores digitados foram a= %d e b= %d\n", a, b);
}