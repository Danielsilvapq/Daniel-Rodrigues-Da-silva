#include <stdio.h>

int main() {
    char respostas[5][10];
    char gabarito[10];
    int resultado[5] = {0}; 

    printf("Digite as respostas dos 5 alunos (10 respostas cada, letras a-d):\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Questao %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);
        }
    }

    printf("\nDigite o gabarito oficial (10 respostas, letras a-d):\n");
    for (int i = 0; i < 10; i++) {
        printf("Gabarito Questao %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            if (respostas[i][j] == gabarito[j]) {
                resultado[i]++;
            }
        }
    }

    printf("\nPontuacao dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, resultado[i]);
    }

    return 0;
}
