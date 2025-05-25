#include <stdio.h>

void selectionSort(int vetor[], int tamanho, int *comparacoes, int *trocas) {
    *comparacoes = 0;
    *trocas = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < tamanho; j++) {
            (*comparacoes)++;
            if (vetor[j] < vetor[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = vetor[i];
            vetor[i] = vetor[min_idx];
            vetor[min_idx] = temp;
            (*trocas)++;
        }
    }
}

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

    int comparacoes, trocas;
    selectionSort(vetor, 10, &comparacoes, &trocas);

    printf("Vetor ordenado:\n");
    imprimirVetor(vetor, 10);

    printf("Total de comparacoes: %d\n", comparacoes);
    printf("Total de trocas: %d\n", trocas);

    return 0;
}
