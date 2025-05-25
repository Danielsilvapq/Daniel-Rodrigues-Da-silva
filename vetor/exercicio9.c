#include <stdio.h>

int main() {
    int vetor1[30], vetor2[30], vetorResultado[60];
    int i = 0, j = 0, k = 0;

    printf("Digite 30 números inteiros ORDENADOS para o primeiro vetor:\n");
    for (i = 0; i < 30; i++) {
        printf("vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite 30 números inteiros ORDENADOS para o segundo vetor:\n");
    for (i = 0; i < 30; i++) {
        printf("vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    i = j = k = 0;
    while (i < 30 && j < 30) {
        if (vetor1[i] < vetor2[j]) {
            vetorResultado[k++] = vetor1[i++];
        } else {
            vetorResultado[k++] = vetor2[j++];
        }
    }

    while (i < 30) {
        vetorResultado[k++] = vetor1[i++];
    }

    while (j < 30) {
        vetorResultado[k++] = vetor2[j++];
    }

    printf("\nVetor intercalado e ordenado:\n");
    for (i = 0; i < 60; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}

