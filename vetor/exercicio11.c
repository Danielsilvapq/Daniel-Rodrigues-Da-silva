#include <stdio.h>

#define QTD_FUNCIONARIOS 15
#define SALARIO_MINIMO 1518.0

int main() {
    int vetNumOp[QTD_FUNCIONARIOS];
    int vetNumPecas[QTD_FUNCIONARIOS];
    int vetSexo[QTD_FUNCIONARIOS];
    float vetSalarios[QTD_FUNCIONARIOS];
    float folhaTotal = 0.0;

    for (int i = 0; i < QTD_FUNCIONARIOS; i++) {
        printf("\nOperario %d\n", i + 1);
        printf("Numero do operario: ");
        scanf("%d", &vetNumOp[i]);

        printf("Numero de pecas fabricadas: ");
        scanf("%d", &vetNumPecas[i]);

        printf("Sexo (1 = Masculino, 2 = Feminino): ");
        scanf("%d", &vetSexo[i]);

        if (vetNumPecas[i] <= 30) {
            vetSalarios[i] = SALARIO_MINIMO;
        } else if (vetNumPecas[i] <= 35) {
            int pecasExtras = vetNumPecas[i] - 30;
            vetSalarios[i] = SALARIO_MINIMO + pecasExtras * (0.03 * SALARIO_MINIMO);
        } else {
            int pecasExtras = vetNumPecas[i] - 30;
            vetSalarios[i] = SALARIO_MINIMO + pecasExtras * (0.05 * SALARIO_MINIMO);
        }

        folhaTotal += vetSalarios[i];
    }


    printf("\n--- RELATÓRIO DE SALÁRIOS ---\n");
    for (int i = 0; i < QTD_FUNCIONARIOS; i++) {
        printf("Operario %d - Peças: %d - Salário: R$ %.2f\n", 
                vetNumOp[i], vetNumPecas[i], vetSalarios[i]);
    }

    printf("\nTotal da folha de pagamento: R$ %.2f\n", folhaTotal);

    return 0;
}
