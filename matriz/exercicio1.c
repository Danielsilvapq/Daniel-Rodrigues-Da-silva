#include <stdio.h>
#include <stdbool.h>

#define TAM 9

bool verificaUnicidade(int vetor[]) {
    int contador[TAM + 1] = {0}; 

    for (int i = 0; i < TAM; i++) {
        if (vetor[i] < 1 || vetor[i] > 9) return false;
        if (contador[vetor[i]] > 0) return false; 
        contador[vetor[i]]++;
    }
    return true;
}

int main() {
    int sudoku[TAM][TAM];

    printf("Digite a matriz Sudoku 9x9 (valores de 1 a 9):\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &sudoku[i][j]);
        }
    }

    // Verificar linhas
    for (int i = 0; i < TAM; i++) {
        int linha[TAM];
        for (int j = 0; j < TAM; j++) {
            linha[j] = sudoku[i][j];
        }
        if (!verificaUnicidade(linha)) {
            printf("Sudoku inválido: linha %d tem valores repetidos.\n", i + 1);
            return 0;
        }
    }

    for (int j = 0; j < TAM; j++) {
        int coluna[TAM];
        for (int i = 0; i < TAM; i++) {
            coluna[i] = sudoku[i][j];
        }
        if (!verificaUnicidade(coluna)) {
            printf("Sudoku inválido: coluna %d tem valores repetidos.\n", j + 1);
            return 0;
        }
    }

    for (int blocoLinha = 0; blocoLinha < 3; blocoLinha++) {
        for (int blocoCol = 0; blocoCol < 3; blocoCol++) {
            int bloco[TAM];
            int k = 0;
            for (int i = blocoLinha * 3; i < blocoLinha * 3 + 3; i++) {
                for (int j = blocoCol * 3; j < blocoCol * 3 + 3; j++) {
                    bloco[k++] = sudoku[i][j];
                }
            }
            if (!verificaUnicidade(bloco)) {
                printf("Sudoku inválido: bloco 3x3 na posição (%d,%d) tem valores repetidos.\n", blocoLinha + 1, blocoCol + 1);
                return 0;
            }
        }
    }

    printf("Sudoku válido!\n");
    return 0;
}

