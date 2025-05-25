#include <stdio.h>

int main() {
    int vetor[50];

    printf("Digite 50 números inteiros:\n");
    for (int i = 0; i < 50; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNúmeros na ordem contrária:\n");
    for (int i = 49; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

