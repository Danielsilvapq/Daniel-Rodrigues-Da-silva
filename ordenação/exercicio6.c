#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100000

void merge(int vetor[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int *esq = malloc(n1 * sizeof(int));
    int *dir = malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++)
        esq[i] = vetor[inicio + i];
    for (int j = 0; j < n2; j++)
        dir[j] = vetor[meio + 1 + j];

    int i = 0, j = 0, k = inicio;

    while (i < n1 && j < n2) {
        if (esq[i] <= dir[j]) {
            vetor[k++] = esq[i++];
        } else {
            vetor[k++] = dir[j++];
        }
    }

    while (i < n1) {
        vetor[k++] = esq[i++];
    }
    while (j < n2) {
        vetor[k++] = dir[j++];
    }

    free(esq);
    free(dir);
}

void mergeSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);
        merge(vetor, inicio, meio, fim);
    }
}

int main() {
    int vetor[TAMANHO];
    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 1000000;  
    }

    clock_t inicio = clock();

    mergeSort(vetor, 0, TAMANHO - 1);

    clock_t fim = clock();
    double tempo_gasto = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("Tempo gasto para ordenar %d elementos: %.4f segundos\n", TAMANHO, tempo_gasto);

    return 0;
}
