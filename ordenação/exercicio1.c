#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 9; i++) {  // 9 passagens
        for (int j = 0; j < 9 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // troca
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }

        printf("Passagem %d: ", i + 1);
        imprimirVetor(vetor, 10);
    }

    return 0;
}
