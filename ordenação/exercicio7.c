#include <stdio.h>

#define TAMANHO 10

int bubbleSortOriginal(int v[], int n) {
    int passos = 0, trocas = 0;
    for (int i = 0; i < n - 1; i++) {
        passos++;
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                trocas++;
            }
        }
    }
    printf("Bubble Sort Original: Passos = %d, Trocas = %d\n", passos, trocas);
    return passos;
}

int bubbleSortOtimizado(int v[], int n) {
    int passos = 0, trocas;
    for (int i = 0; i < n - 1; i++) {
        passos++;
        trocas = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                trocas++;
            }
        }
        if (trocas == 0) {
            break; 
        }
    }
    printf("Bubble Sort Otimizado: Passos = %d, Trocas = %d\n", passos, trocas);
    return passos;
}

void imprimirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int vetor1[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Vetor antes da ordenação:\n");
    imprimirVetor(vetor1, TAMANHO);

    bubbleSortOriginal(vetor1, TAMANHO);

    bubbleSortOtimizado(vetor2, TAMANHO);

    return 0;
}
