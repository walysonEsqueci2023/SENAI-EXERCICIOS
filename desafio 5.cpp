#include <stdio.h>

int main() {
    int n;

    // Solicitar o n�mero inteiro positivo e diferente de zero
    do {
        printf("Digite um n�mero inteiro positivo e diferente de zero: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("N�mero inv�lido. O n�mero deve ser positivo e diferente de zero.\n");
        }
    } while (n <= 0);

    // Exibir n - 1 e n + 1
    printf("n - 1: %d\n", n - 1);
    printf("n + 1: %d\n", n + 1);

    return 0;
}
