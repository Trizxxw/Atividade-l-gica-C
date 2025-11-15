#include <stdio.h>

int main() {
    int A[10], B[10], C[20], i, j = 0;

    printf("--- Leitura do vetor A ---\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    printf("\n--- Leitura do Vetor B ---\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o elemento B[%d]: ", i);
        scanf("%d", &B[i]);
    }
    for (i = 0; i < 10; i++) {
        C[j] = A[i];
        j++;
        C[j] = B[i];
        j++;
    }
    printf("\n--- VETOR C ---\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    return 0;
}
