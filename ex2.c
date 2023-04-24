#include <stdio.h>

int main() {
    int mat[10][15]; // declaração da matriz
    int i, j, soma;

    // preenche a matriz com números inteiros aleatórios entre 0 e 99
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            mat[i][j] = rand() % 100; // gera um número aleatório entre 0 e 99
        }
    }

    // calcula a soma dos elementos de cada linha e verifica se é par ou ímpar
    for (i = 0; i < 10; i++) {
        soma = 0;
        for (j = 0; j < 15; j++) {
            soma += mat[i][j];
        }
        printf("Soma dos elementos da linha %d: %d (%s)\n", i, soma, (soma % 2 == 0) ? "par" : "ímpar");
    }

    // calcula a soma dos elementos de cada coluna e verifica se é par ou ímpar
    for (j = 0; j < 15; j++) {
        soma = 0;
        for (i = 0; i < 10; i++) {
            soma += mat[i][j];
        }
        printf("Soma dos elementos da coluna %d: %d (%s)\n", j, soma, (soma % 2 == 0) ? "par" : "ímpar");
    }

    return 0;
}
