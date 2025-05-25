#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0.0, media;
    int i, count = 0;

    printf("Digite as notas dos 10 alunos:\n");
    for (i = 0; i < 10; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10;

    for (i = 0; i < 10; i++) {
        if (notas[i] > media) {
            count++;
        }
    }

    printf("Média da turma: %.2f\n", media);
    printf("Número de alunos com nota superior à média: %d\n", count);

    return 0;
}

