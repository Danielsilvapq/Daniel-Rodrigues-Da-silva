#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particiona(int vetor[], int inicio, int fim) {
    int meio = inicio + (fim - inicio) / 2;
    int pivo = vetor[meio];
    int i = inicio;
    int j = fim;

    while (i <= j) {
        while (vetor[i] < pivo) i++;
        while (vetor[j] > pivo) j--;

        if (i <= j) {
            troca(&vetor[i], &vetor[j]);
            i++;
            j--;
        }
    }
    return i;
}

void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int index = particiona(vetor, inicio, fim);

        if (inicio < index - 1)
            quickSort(vetor, inicio, index - 1);
        if (index < fim)
            quickSort(vetor, index, fim);
    }
}

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite %d elementos:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    quickSort(vetor, 0, n - 1);

    printf("Vetor ordenado:\n");
    imprimirVetor(vetor, n);

    return 0;
}
