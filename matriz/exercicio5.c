#include <stdio.h>

int main() {
    int alunos[5][4]; 
    int i;
    int matricula_maior_nota = 0;
    int maior_nota = -1;
    float soma_notas = 0;

    // (a) 
    for (i = 0; i < 5; i++) {
        printf("Aluno %d\n", i+1);
        printf("Matricula: ");
        scanf("%d", &alunos[i][0]);
        printf("Media das provas: ");
        scanf("%d", &alunos[i][1]);
        printf("Media dos trabalhos: ");
        scanf("%d", &alunos[i][2]);

        // (b) 
        alunos[i][3] = alunos[i][1] + alunos[i][2];

        soma_notas += alunos[i][3];

        if (alunos[i][3] > maior_nota) {
            maior_nota = alunos[i][3];
            matricula_maior_nota = alunos[i][0];
        }
    }

    // (c) 
    printf("\nAluno com maior nota final: %d\n", matricula_maior_nota);

    // (d) 
    printf("Media aritmetica das notas finais: %.2f\n", soma_notas / 5);

    return 0;
}
