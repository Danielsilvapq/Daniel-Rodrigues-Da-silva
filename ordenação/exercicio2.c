#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void insertionSort(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}

int main() {
    int vetor[20];

    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        vetor[i] = rand() % 100;
    }

    printf("Vetor antes da ordenacao:\n");
    imprimirVetor(vetor, 20);

    insertionSort(vetor, 20);

    printf("Vetor depois da ordenacao:\n");
    imprimirVetor(vetor, 20);

    return 0;
}
