#include <stdio.h>

int main() {
    int senha;
    int numero[5];

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != 1234) {
            printf("Senha incorreta! Tente novamente.\n");
        }
    } while (senha != 1234);


    printf("Acesso liberado!\n");
    printf("%d", numero[0]);

    return 0;
}
