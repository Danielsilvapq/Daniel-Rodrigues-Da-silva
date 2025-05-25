#include <stdio.h>
#include <math.h> 

int main() {
    int vetor[100];
    double somaQuadrados = 0.0;
    double rms;

    printf("Digite 100 números inteiros:\n");
    for (int i = 0; i < 100; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        somaQuadrados += vetor[i] * vetor[i];
    }

    rms = sqrt(somaQuadrados / 100);

    printf("\nRaiz Média Quadrática (RMS): %.2f\n", rms);

    return 0;
}

