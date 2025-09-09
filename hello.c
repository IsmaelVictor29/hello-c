#include <stdio.h>

int main() {
    int numero = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("numero digitado: %d\n", numero);

    for(int mult = 1; mult <= 10; mult++) {
        printf("%d * %d = %d\n", mult, numero, (mult * numero));

    }

    return 0;
}