#include <stdio.h>

int main() {
    int A[4][4], D[4], i, j, soma = 0;

    printf("--- matriz A ---\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < 4; i++) {
        soma += A[i][i]; 
        D[i] = A[i][i];
    }
    printf("Soma da Diagonal Principal: %d\n", soma);
    printf("Vetor D:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", D[i]);
    }
    printf("\n");
    return 0;
}
