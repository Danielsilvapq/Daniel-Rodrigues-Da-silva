#include <stdio.h>

int main() {
    int tabuleiro[3][3];
    int linha, coluna;
    int jogada_linha = -1, jogada_coluna = -1;

    printf("Digite o estado atual do tabuleiro (3x3):\n");
    printf("Use -1 para sua peça, 1 para oponente, 0 para casa vazia.\n");

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("Posicao [%d][%d]: ", linha, coluna);
            scanf("%d", &tabuleiro[linha][coluna]);
        }
    }

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            if (tabuleiro[linha][coluna] == 0) {
                jogada_linha = linha;
                jogada_coluna = coluna;
                break;
            }
        }
        if (jogada_linha != -1) {
            break;
        }
    }

    if (jogada_linha != -1 && jogada_coluna != -1) {
        printf("\nProxima jogada sugerida na posicao: [%d][%d]\n", jogada_linha, jogada_coluna);
    } else {
        printf("\nTabuleiro cheio ou nenhuma jogada possivel.\n");
    }

    return 0;
}

