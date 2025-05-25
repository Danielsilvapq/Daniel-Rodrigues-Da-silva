#include <stdio.h>

int main() {
    int vetor[100];
    int x;
    int encontrado = 0;

    printf("Digite 100 números inteiros:\n");
    for (int i = 0; i < 100; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor a ser buscado (x): ");
    scanf("%d", &x);

    for (int i = 0; i < 100; i++) {
        if (vetor[i] == x) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("O valor %d existe no conjunto.\n", x);
    } else {
        printf("O valor %d não foi encontrado no conjunto.\n", x);
    }

    return 0;
}
