#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    do {
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
        }
    } while (numero != 0);

    printf("Soma dos numeros positivos: %d\n", soma);

    return 0;
}
