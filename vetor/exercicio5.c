#include <stdio.h>

int main() {
    int vetor[100];
    int soma = 0;

    printf("Digite 100 números inteiros:\n");
    for (int i = 0; i < 100; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    double media = (double)soma / 100;

    printf("\nMédia aritmética: %.2f\n", media);

    return 0;
}

