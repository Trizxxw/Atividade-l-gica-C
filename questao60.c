#include <stdio.h>

int main() {
    int R[4][5], i, j, maior, linha, coluna;

    printf("--- Matriz R  ---\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite R[%d][%d]: ", i, j);
            scanf("%d", &R[i][j]);
        }
    }
    maior = R[0][0];
    linha = 0;
    coluna = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            if (R[i][j] > maior) {
                maior = R[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    printf("Maipr elemento e: %d\n", maior);
    printf("ocupa a posicao de: [%d][%d]\n", linha, coluna);
    return 0;
}
