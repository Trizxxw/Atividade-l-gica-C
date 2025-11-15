#include <stdio.h>

int main() {
    int A[10], B[10], i, j;

    printf("--- Leitura do Vetor A ---\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    j = 9;
    for (i = 0; i < 10; i++) {
        B[i] = A[j];
        j--;
    }
    printf("\n--- Vetor B Invertido ---\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    return 0;
}
