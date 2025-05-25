#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int V1[50];
    int V2[50]; 
    int i, j = 0;

    for (i = 0; i < 50; i++) {
        V1[i] = i + 1;
    }

    for (i = 0; i < 50; i++) {
        if (ehPrimo(V1[i])) {
            V2[j++] = V1[i];
        }
    }

    printf("Vetor V1 (1 a 50):\n");
    for (i = 0; i < 50; i++) {
        printf("%d ", V1[i]);
    }

    printf("\n\nVetor V2 (primos de 1 a 50):\n");
    for (i = 0; i < j; i++) {
        printf("%d ", V2[i]);
    }

    printf("\n");

    return 0;
}
