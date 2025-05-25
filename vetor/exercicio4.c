#include <stdio.h>

int main() {
    int vetor[100];
    int maior, menor;

    printf("Digite 100 números inteiros:\n");
    for (int i = 0; i < 100; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 1; i < 100; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    int amplitude = maior - menor;

    printf("\nAmplitude total do conjunto: %d\n", amplitude);

    return 0;
}
