#include <stdio.h>

int main() {
    int A[3][3], T[3][3], i, j;

    printf("--- matriz a ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            T[i][j] = A[j][i];
        }
    }
    printf("\n--- Resultado  ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
