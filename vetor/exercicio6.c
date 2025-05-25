#include <stdio.h>
#include <math.h> 

int main() {
    int vetor[100];
    int soma = 0;
    double media, desvioMedio = 0;

    printf("Digite 100 números inteiros:\n");
    for (int i = 0; i < 100; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = (double)soma / 100;

    for (int i = 0; i < 100; i++) {
        desvioMedio += fabs(vetor[i] - media);
    }

    desvioMedio /= 100;

    printf("\nMédia aritmética: %.2f\n", media);
    printf("Desvio médio: %.2f\n", desvioMedio);

    return 0;
}

