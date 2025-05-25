#include <stdio.h>

int main() {
    int vetor1[30], vetor2[30], vetorIntercalado[60];
    int i, j = 0;

    printf("Digite 30 números para o primeiro conjunto:\n");
    for (i = 0; i < 30; i++) {
        printf("vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite 30 números para o segundo conjunto:\n");
    for (i = 0; i < 30; i++) {
        printf("vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 30; i++) {
        vetorIntercalado[j++] = vetor1[i];
        vetorIntercalado[j++] = vetor2[i];
    }

    printf("\nVetor intercalado:\n");
    for (i = 0; i < 60; i++) {
        printf("%d ", vetorIntercalado[i]);
    }
    printf("\n");

    return 0;
}
