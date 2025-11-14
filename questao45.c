#include <stdio.h>

int main() {
    int N, i, R;

    printf("Digite um numero: ");
    scanf("%d", &N);
    printf("\n--- Tabuada de %d ---\n", N);
    for (i = 1; i <= 10; i++) {
        R = N * i;
        printf("%d x %d = %d\n", N, i, R);
    }
    printf("---------------------\n");
    return 0;
}
