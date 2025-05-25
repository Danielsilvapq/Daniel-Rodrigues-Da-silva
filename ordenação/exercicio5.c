#include <stdio.h>

void merge(int v1[], int n1, int v2[], int n2, int v3[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (v1[i] < v2[j]) {
            v3[k++] = v1[i++];
        } else {
            v3[k++] = v2[j++];
        }
    }

    while (i < n1) {
        v3[k++] = v1[i++];
    }

    while (j < n2) {
        v3[k++] = v2[j++];
    }
}

void imprimirVetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int v1[] = {1, 3, 5, 8};
    int v2[] = {2, 4, 6, 7, 9};
    int n1 = sizeof(v1) / sizeof(v1[0]);
    int n2 = sizeof(v2) / sizeof(v2[0]);
    int v3[n1 + n2];

    merge(v1, n1, v2, n2, v3);

    printf("Vetor intercalado (merge):\n");
    imprimirVetor(v3, n1 + n2);

    return 0;
}
